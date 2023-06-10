#include <Arduino.h>
#line 1 "/Users/om/Downloads/ARDUBOY/AB-Particles/AB-Particles.ino"
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

#include "src/AB-Particles.h"

#include <Arduboy2.h>

Arduboy2 arduboy;
Particles particles;

#line 24 "/Users/om/Downloads/ARDUBOY/AB-Particles/AB-Particles.ino"
void setup();
#line 35 "/Users/om/Downloads/ARDUBOY/AB-Particles/AB-Particles.ino"
void loop();
#line 24 "/Users/om/Downloads/ARDUBOY/AB-Particles/AB-Particles.ino"
void setup()
{
	arduboy.begin();

	arduboy.initRandomSeed();

	particles.reset(64, 32);

	arduboy.clear();
}

void loop()
{
	if(!arduboy.nextFrame())
		return;

	arduboy.pollButtons();

	arduboy.clear();

	particles.update();

	particles.render();

	arduboy.display();
}
