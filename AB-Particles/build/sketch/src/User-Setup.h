#line 1 "/Users/om/Downloads/ARDUBOY/AB-Particles/src/User-Setup.h"
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

#pragma once

#include <stdio.h>

namespace UserSetup
{
	constexpr uint8_t particleAmount = 30;

	constexpr bool roundParticles = false;

	constexpr int xForceMin = -5;
	constexpr int xForceMax = 6;

	constexpr int yForceMin = 10;
	constexpr int yForceMax = 15;

	constexpr float sizeMin = 2;
	constexpr float sizeMax = 5;

	constexpr float lifetimeMin = 80;
	constexpr float lifetimeMax = 91;

	constexpr float gravity = 0.042;
};