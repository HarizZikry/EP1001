# Week 1

I came up with a few design and mechanism to be used. I decided to make it simple and cost effective.
So here is the sketch,

<a href="images/FinalProject/Sketch.jpg"><img src="/EP1000/images/FinalProject/Sketch.jpg" style="width:229.5px;height:320px;"></a>

I decided to go with the Slide Door system instead of Auger system because it is less complexed and it is quite troublesome to 3D print an auger. I felt that the auger would be less efficient than the hatch door. The main case and "hatch door" will be laser cut while the hopper system and bracket will be 3D printed. TetraBytes will be programmed to feed the fish every 12 hours, this will be displayed by the LCD. For the hatch door, a positional servo motor will be used to open and close the hatch door.

*Main components I need:*
- Arduino Uno
- Small Breadboard
- Servo FS90 9g
- LCD 1602 2x20 with I2C
- DC 9V power adapter/9V battery

The electronics part is quite easy because there is only output devices connected. The LCD will just display the feeding time. I had to learn how to control the movement of the servo motor and how to use a timer. I will be using milli(s) function as the timer. Once the arduino powers up, the milli(s) will start counting. To activate the servo motor, I will use the if function and then once the servo has been activated the timer will reset. This will run in a loop.

To connect it all together, I use a mini Breadboard because it is easy to connect and there is no soldering required. 
