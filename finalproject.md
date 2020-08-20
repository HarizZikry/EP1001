# Tetrabytes

For our project, we are to build a product using Dfab skills we learnt. I wanted to build something practical and purposeful so I decided to build an automatic fish feeder, Tetrabytes, that will feed every 12 hours. The aim is to make it simple and efficient. Here is the plan:

<a href="images/FinalProject/Sketch.jpg"><img src="/EP1000/images/FinalProject/Sketch.jpg" style="width:229.5px;height:320px;"></a>

I went with the sliding door system as it is simple and easy to delivery the food. It only requires a servo motor to operate. The main case and "sliding door" will be laser cut while the hopper system and bracket will be 3D printed. TetraBytes will be programmed to feed the fish every 12 hours, this will be displayed on the LCD.

**Main components I need:**
- Arduino Uno
- Small Breadboard
- Servo FS90 9g
- LCD 1602 2x20 with I2C
- Battery holder

## Coding and electronics

The electronics part is quite easy because there is only output devices connected. The LCD will just display the feeding time. I had to learn how to control the movement of the servo motor and how to use a timer. I will be using milli(s) function as the timer. Once the arduino powers up, the milli(s) will start counting. To activate the servo motor, I will use the if function and then once the servo has been activated the timer will reset. This will run in a loop.

To power it up I need to connect the battery holder to breadboard. I need to solder the wires from battery holder to Dupont cable so that I can connect it to the breadboard. I borrowed my father's soldering iron and watched a tutorial on soldering. It is actually quite easy, there are 4 main steps to take. Connect the wires, add grease, heat the grease up and solder them. Here is the result:

<a href="images/FinalProject/solder.jpg"><img src="/EP1000/images/FinalProject/solder.jpg" style="width:230.4px;height:172.8px;"></a>

Next, I need to do coding. First I add the servo code. I referred to the example code on arduino and some online tutorials. Then I add the milli(s) and if function. Next I add the LCD code. The code was quite manageable, it took a few tries to set the servo position and the timings. Here is the end results:

<a href="images/FinalProject/tetrabytes_code.jpg"><img src="/EP1000/images/FinalProject/tetrabytes_code.png" style="width:324px;height:438px;"></a> <video width="380" height="280" controls=""><source src="images/FinalProject/circuitdemo.mp4" type="video/mp4"></video>

##Design

I want it to be compact and light. It needs to hold the fish food and electronics, therefore the case needs a divider.

<a href="images/FinalProject/Tetrabytes_case1.png"><img src="/EP1000/images/FinalProject/Tetrabytes_case1.png" style="width:397px;height:343px;"></a>

The case dimension is 160mm x 80mm x 100mm. I had to create an opening on the divider for the wire of servo motor. Next, I create the hopper. I will need to use loft to make the overall shape, then create a shell with thickness of 1mm. I will make an opening on the hopper. The hopper was quite easy to make.

<a href="images/FinalProject/Tetrabytes_hopperV1.png"><img src="/EP1000/images/FinalProject/Tetrabytes_hopperV1.png" style="width:295.5px;height:196px;"></a>

I decided to put a hinge on the food cover to make it more accessible. Next, I need to make openings for the LCD display and servo motor. I took down the dimensions of the components then design. The opening for servo was abit difficult to create but I think I got it right.

<a href="images/FinalProject/Tetrabytes_Opening.png"><img src="/EP1000/images/FinalProject/Tetrabytes_Opening.png" style="width:233.8px;height:182.3px;"></a>

I export the case and hatch door as dxf and compiled them into 1 dxf file using Inkscape. I also save the hopper as stl file and slice it for 3D printing using Cura. I realised that the hopper was too complex and long for 3D printing so I rescale/redesign the hopper to reduce time. I also had to make changes to the case as now the hopper will occupy a smaller area.

Here is the  final hopper and case:

<a href="images/FinalProject/hopperV2.jpg"><img src="/EP1000/images/FinalProject/hopperV2.jpg" style="width:172.8px;height:230.4px;"></a> <a href="images/FinalProject/case1.jpg"><img src="/EP1000/images/FinalProject/case1.jpg" style="width:230.4px;height:172.8px;"></a>

For the hinge, I found it on [](thingeverse.com) as it was quite difficult to create one. This [guy's](https://www.thingiverse.com/thing:1096475) hinge is pretty smooth and popular. Do check it out.

Next I need to create a mount for the case to sit on the fish tank. I made a clamp-like mount using screws to tighten. I got it ready for 3D printing. However, it did not turn out great. The threads I created are gone because of the supports. I realised that the screw and threads were too small so the 3D printer was not able to accurately print it, this means that I need rescale the mount and screw threads.

<a href="images/FinalProject/mountV1.jpg"><img src="/EP1000/images/FinalProject/mountV1.jpg" style="width:230.4px;height:172.8px;"></a>

I decided to create 1 big screw as the threads will big enough to 3D print.

<a href="images/FinalProject/mountNboltV2.jpg"><img src="/EP1000/images/FinalProject/mountNboltV2.jpg" style="width:230.4px;height:172.8px;"></a> <a href="images/FinalProject/boltV2.jpg"><img src="/EP1000/images/FinalProject/boltV2.jpg" style="width:230.4px;height:172.8px;"></a>

##Assembly

I first had to build the case, I used hot glue to stick them together. I did not glue one of the side to the case because I want to still be able to access the electronics. Then I stick the hopper using super glue and use mounting tape to stick the mount. I hot glued the sliding door to the servo hand. I used double sided tape to stick the servo and velcro straps for the arduino and battery holder so that I can still access them. Here are some photos of assembly:

<a href="images/FinalProject/case.jpg"><img src="/EP1000/images/FinalProject/case.jpg" style="width:230.4px;height:172.8px;"></a> <a href="images/FinalProject/hopper.jpg"><img src="/EP1000/images/FinalProject/hopper.jpg" style="width:230.4px;height:172.8px;"></a> <a href="images/FinalProject/slidedoor.jpg"><img src="/EP1000/images/FinalProject/slidedoor.jpg" style="width:230.4px;height:172.8px;"></a>

<a href="images/FinalProject/stick_mount.jpg"><img src="/EP1000/images/FinalProject/stick_mount.jpg" style="width:230.4px;height:172.8px;"></a> <a href="images/FinalProject/electronics.jpg"><img src="/EP1000/images/FinalProject/electronics.jpg" style="width:230.4px;height:172.8pxpx;"></a>

## Final Product

I'm happy with the final result, it looks good.

<a href="images/FinalProject/finalbuild.jpg"><img src="/EP1000/images/FinalProject/finalbuild.jpg" style="width:230.4px;height:172.8pxpx;"></a> <video width="380" height="280" controls=""><source src="images/FinalProject/action.mp4" type="video/mp4"></video>

### Here are the files

- [Tetrabytes.f3d](/Fusion360/Tetrabytes.f3d)
- [Tetrabytes.ino](/Fusion360/Tetrabytes/Tetrabytes.ino)
- [UM2_boltV2.gcode](/Fusion360/UM2_boltV2.gcode)
- [UM2_hopperV2.gcode](/Fusion360/UM2_hopperV2.gcode)
- [UM2_mountV2.gcode](/Fusion360/UM2_mountV2.gcode)

### Bill-of-Materials

<a href="images/FinalProject/BOM.png"><img src="/EP1000/images/FinalProject/BOM.png" style="width:373.5px;height:150.5pxpx;"></a>
