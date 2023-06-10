/*
Copyright 2023 Om Rawaley (@omrawaley)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "User-Setup.h"

#include "AB-Particles.h"

void Particles::reset(float x, float y)
{
	for(auto &particle : this->particleArray)
	{
		particle.counter = random(UserSetup::lifetimeMin, UserSetup::lifetimeMax);

		particle.size = random(UserSetup::sizeMin, UserSetup::sizeMax);

		particle.x = x;
		particle.y = y;

		particle.xForce = random(UserSetup::xForceMin, UserSetup::xForceMax) / 100.0;
        particle.yForce = random(UserSetup::yForceMin, UserSetup::yForceMax) / 100.0;
	}
}

void Particles::update()
{
	for(auto &particle : this->particleArray)
	{
		particle.yVelocity += UserSetup::gravity * particle.size;

		particle.xVelocity += particle.xForce;
		particle.yVelocity -= particle.yForce;

		particle.x += particle.xVelocity;
		particle.y += particle.yVelocity;

		if(particle.isActive())
			--particle.counter;
	}
}

void Particles::render()
{
	if(!UserSetup::roundParticles)
	{
		for(auto &particle : particleArray)
		{
			if(particle.isActive())
			{
				arduboy.drawRect(particle.x, particle.y, particle.size, particle.size, WHITE);
			}
		}
	}
	else
	{
		for(auto &particle : particleArray)
		{
			if(particle.isActive())
			{
				arduboy.drawCircle(particle.x, particle.y, (particle.size / 2), WHITE);
			}
		}
	}
}