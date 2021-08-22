# Project

I decided to make a USB Handbrake. This can be used with a racing simulator, It will be connected to the computer through USB. Here is the concept diagram and prototype:

  <a href="/EP1001/Images/project/concept.jpg"><img src="/EP1001/Images/project/concept.jpg" style="width:324px;height:576px;"></a> <a href="/EP1001/Images/project/IMG_20210815_210457.jpg"><img src="/EP1001/Images/project/IMG_20210815_210457.jpg" style="width:324px;height:576px;"></a>

Components I need:
1. 10K potentiometer
2. Limit switch
3. LED

The handbrake itself will made of wood as it needs to be strong. Thickness of the wood I'm using is 18mm. I'll be using the CNC mill to fabricate it. Here are the designs and layout:

  <a href="/EP1001/Images/project/Screenshot (186).png"><img src="/EP1001/Images/project/Screenshot (186).png" style="width:576px;height:324px;"></a>

## Handle

  <a href="/EP1001/Images/project/Screenshot (188).png"><img src="/EP1001/Images/project/Screenshot (188).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/Screenshot (187).png"><img src="/EP1001/Images/project/Screenshot (187).png" style="width:576px;height:324px;"></a>

## Plate

  <a href="/EP1001/Images/project/Screenshot (189).png"><img src="/EP1001/Images/project/Screenshot (189).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/Screenshot (190).png"><img src="/EP1001/Images/project/Screenshot (190).png" style="width:576px;height:324px;"></a>

## Baseplate

  <a href="/EP1001/Images/project/Screenshot (191).png"><img src="/EP1001/Images/project/Screenshot (191).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/Screenshot (192).png"><img src="/EP1001/Images/project/Screenshot (192).png" style="width:576px;height:324px;"></a>


## Gearset Potentiometer

I'm using the gearset to help transmit the movement of handle to the potentiometer.

  <a href="/EP1001/Images/project/Screenshot (193).png"><img src="/EP1001/Images/project/Screenshot (193).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210810_130041.jpg"><img src="/EP1001/Images/project/IMG_20210810_130041.jpg" style="width:324px;height:576px;"></a>

I used the Spur gear tool in add ons to create the gearset. The bigger gear has 26 teeth with pcd of 39mm. The smaller gear has 13 teeth with pcd of 19.5mm

## Potentiometer Mount

  <a href="/EP1001/Images/project/Screenshot (194).png"><img src="/EP1001/Images/project/Screenshot (194).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/Screenshot (195).png"><img src="/EP1001/Images/project/Screenshot (195).png" style="width:576px;height:324px;"></a>

This is a mount for the potentiometer so that it stays in place. It will be attached to the smaller gear. The slot is clearance for the small notch on the potentiometer.

  <a href="/EP1001/Images/project/IMG_20210822_184056.jpg"><img src="/EP1001/Images/project/IMG_20210822_184056.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184424.jpg"><img src="/EP1001/Images/project/IMG_20210822_184424.jpg" style="width:576px;height:324px;"></a>

## CNC Milling

I'm using CNC milling to fabricate the main frame.

  <a href="/EP1001/Images/project/IMG_20210811_093047.jpg"><img src="/EP1001/Images/project/IMG_20210811_093047.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210812_140717.jpg"><img src="/EP1001/Images/project/IMG_20210812_140717.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210812_141402.jpg"><img src="/EP1001/Images/project/IMG_20210812_141402.jpg" style="width:576px;height:324px;"></a>

## PCB board

Inputs devices will be the potentiometer and the limit switch. An LED will be the output device. I'm using the Attiny412 as the microcontroller. There will be two 3pin header for the UPDI and potentiometer. Limit switch is connected to the board through 2pin header. The limit switch requires a 10k resistor. LED also uses a 1k resistor.

  <a href="/EP1001/Images/project/Screenshot (197).png"><img src="/EP1001/Images/project/Screenshot (197).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/Screenshot (196).png"><img src="/EP1001/Images/project/Screenshot (196).png" style="width:576px;height:324px;"></a>

The board dimension is 26mm by 36mm. When milling the board, make sure to use offset cut as this will make it easier to solder the components.

  <a href="/EP1001/Images/project/IMG_20210813_103354.jpg"><img src="/EP1001/Images/project/IMG_20210813_103354.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210813_104050.jpg"><img src="/EP1001/Images/project/IMG_20210813_104050.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184212.jpg"><img src="/EP1001/Images/project/IMG_20210822_184212.jpg" style="width:576px;height:324px;"></a>

## PCB box

I design a box for the PCB board to make it look clean. Since there is an LED on the board, I decided to make a hole on the cover. I'll use a plastic sheet to cover it up so that the LED will be visible

  <a href="/EP1001/Images/project/Screenshot (198).png"><img src="/EP1001/Images/project/Screenshot (198).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184134.jpg"><img src="/EP1001/Images/project/IMG_20210822_184134.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184449.jpg"><img src="/EP1001/Images/project/IMG_20210822_184449.jpg" style="width:576px;height:324px;"></a>

## Limit Switch mount

The limit switch would need to seat at the maximum travel of the handle

  <a href="/EP1001/Images/project/Screenshot (199).png"><img src="/EP1001/Images/project/Screenshot (199).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184106.jpg"><img src="/EP1001/Images/project/IMG_20210822_184106.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184414.jpg"><img src="/EP1001/Images/project/IMG_20210822_184414.jpg" style="width:576px;height:324px;"></a>

## Coding

The original plan was to use interfacing programming to read out the values of the potentiometer. It can be represented with a simple graph. However, I forgot to add a FTDI header to my PCB board. I'm not able to send information from the board to software.

When the handle reaches its maximum travel, it will actuate the limit switch. Limit switch will activate the flashing led. This is to show that it has reach its maximum travel.

  <a href="/EP1001/Images/project/Screenshot (200).png"><img src="/EP1001/Images/project/Screenshot (200).png" style="width:576px;height:324px;"></a>

## Assembly

I used fasteners to assemble the handbrake as it needs to be strong. I also used hot glue to tidy up the cables. For the force feedback, I used a thick rubberband pressed between washers. I wrapped the top of the handle with tape to make the grip comfortable to hold.  

  <a href="/EP1001/Images/project/IMG_20210816_215611.jpg"><img src="/EP1001/Images/project/IMG_20210816_215611.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210816_215604.jpg"><img src="/EP1001/Images/project/IMG_20210816_215604.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_183953.jpg"><img src="/EP1001/Images/project/IMG_20210822_183953.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_190752.jpg"><img src="/EP1001/Images/project/IMG_20210822_190752.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_193522.jpg"><img src="/EP1001/Images/project/IMG_20210822_193522.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_184727.jpg"><img src="/EP1001/Images/project/IMG_20210822_184727.jpg" style="width:576px;height:324px;"></a>

## Hero Shots

  <a href="/EP1001/Images/project/IMG_20210822_194544.jpg"><img src="/EP1001/Images/project/IMG_20210822_194544.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210822_194538.jpg"><img src="/EP1001/Images/project/IMG_20210822_194538.jpg" style="width:576px;height:324px;"></a>

<video width="380" height="280" controls=""><source src="/EP1001/Images/project/video_20210822_202623_edit.mp4" type="video/mp4"></video>

<video width="380" height="280" controls=""><source src="/EP1001/Images/project/video_20210822_202609_edit.mp4" type="video/mp4"></video>

## Presentation

  <a href="/EP1001/Images/project/Handbrake presentation.png"><img src="/EP1001/Images/project/Handbrake presentation.png" style="width:576px;height:324px;"></a>

<video width="380" height="280" controls=""><source src="/EP1001/Images/project/USB handbrake.mp4" type="video/mp4"></video>

## BOM

  <a href="/EP1001/Images/project/Screenshot (201).png"><img src="/EP1001/Images/project/Screenshot (201).png" style="width:611.5px;height:348.5px;"></a>

## Files

- [Tetrabytes.f3d](/Fusion360/Tetrabytes.f3d)
