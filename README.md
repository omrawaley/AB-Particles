# AB-Particles Particle System
#### V1.1.0 now here.

AB-Particles is a particle system I designed for the 8-bit gaming platform, the [Arduboy](https://www.arduboy.com/). However, it can be ported to other platforms with ease. I probably will end up porting it to the ESP32.

A simple `.ino` file is included for a demo of the particle system, and it's use.

![ArduboyRecording(1)](https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/3817f76b-6c9a-4192-863e-1b616120c22c)

(Default settings shown above. The "explosion" can be altered by the user)

## Features
AB-Particles is a simple, minamalistic approach to a particle system. 

Currently, it has the option for either square or circular particles, and an option to have filled or "outlined" particles.

Square (not filled):

![ArduboyRecording](https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/e45267ca-e2cc-4f21-a5a5-f2e812a22d0d)
 
 Square (filled):
 
 ![ArduboyRecording](https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/89bcd7aa-897d-4327-a486-4ca166668603)

 Circular (not filled):
 
![ArduboyRecording(1)](https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/deb7939b-28bf-4d7d-9d8e-c15adba9d4e4)
 
Circular (filled):

![ArduboyRecording(1)](https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/d2313ebe-5d7c-46be-88af-dab557a0e7b1)

Each particle also has a set lifespan/lifetime, where after the lifespan of a particle is over, the particle will disapear. The lifespan of a particle is pseudo-randomly generated, leading some particles to disapear earlier than others for a nice effect.

A horizontal and vertical force (which are added to the particle's velocity) is also pseudo-randomly generated (but restricted by a limit defined by the user) meaning each and every time you reset (and update + render) the particles, you'll have an entirely new effect.

Bigger particles (defined by `size`) will also fall faster than smaller particles, giving the "explosion" a realistic feel.

You can also define how many particles you want. (30 by default).

Settings are configured inside the `User-Setup.cpp` file.

<img width="255" alt="image" src="https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/65115c8c-84de-4977-8422-5925f4dc630d">

One setting is also available in `User-Setup.h`, however most will not need to change it unless they have memory concerns regarding their program.

<img width="400" alt="image" src="https://github.com/omrawaley/AB-Particles-Particle-System/assets/133281331/a3bf99e7-c93c-4b75-94af-4e3384674ba9">

## To Use:
To utilise AB-Particles in your project, you must include the `AB-Particles.cpp` and `AB-Particles.h` files (available above in the `src` folder) in your project directory.

From then, make an object of the class `Particles` called `particles`, as `particles` is `extern`ed in the header meaning it is known throughout all your project files. Same thing with the `Arduboy2` class, so you should call your `Arduboy2` object `arduboy`. If you have any confusion regarding this step, feel free to check out the demo included.

Note that in order for the `random()` function to work properly, you must seed it with the `Arduboy2` function, `initRandomSeed()` in `setup()`.

As mentioned above, you can change and configure values/settings in the `User-Setup.cpp` file.

### Functions

AB-Particles includes three functions: `reset(float x, float y)`, `update()`, and `render()`.

`reset(float x, float y)`: Randomizes each particle's attributes in the array set, and takes an x and y coordinate for each particle's position (world space or camera space depending on what you input to the function).

`update()`: Updates each particle per frame.

`render()`: Renders each particle per frame.

## License Notice:
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

### Terms

- Redistribution and modification is permitted as long as you abide by the redistribution terms
- The author or license cannot be held liable for any damage caused by the software
- Must include a copy of the license and original copyright notice when redistributing
- Must state all changes made to the software when distributing

