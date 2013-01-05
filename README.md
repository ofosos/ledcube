ledcube
=======

This is the place to document some of my efforts to build a LED cube.

I'm starting out with a cube of 4x4x4 blue LEDs. These will be
controlled by an Arduino Duemilanove and will hopefully be capable of
displaying interesting moving patterns.

2012-01-05 - 0:00 Setup of the cube is completely done, 64 leds are soldered
together. The distance between each LED is 15mm, so the overall size is 45mm^3.

2012-01-05 - 16:00 Layers can be controlled individually. The first sketch
is completed to test output. The 74ls138 won't be connected to the prototype,
since a 3-8 decoder ends up using 4 inputs, which are enough to control the
four layers individually, there's not much advantage in connecting it.
Each individual layer is a common cathode setup controlled by a TIP120, for a
4^3 cube this is a rather powerful part, but for a 8^3 cube it's ideal.
I setup this git repo to document stuff.

I'm considering going to conrad electroci to buy some resistors, this will
propably take around two hours. Since I'm so unbelievably lazy, I'm weighing
my options: connecting the LEDs directly to the 74hc595 shift registers or
using different values for the columns.


