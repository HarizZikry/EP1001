# Project

I decided to make a USB Handbrake. This can be used with a racing simulator, It will be connected to the computer through USB. Here is the concept diagram and prototype:

  <a href="/EP1001/Images/project/concept.jpg"><img src="/EP1001/Images/project/concept.jpg" style="width:324px;height:576px;"></a>

  <a href="/EP1001/Images/project/IMG_20210815_210457.jpg"><img src="/EP1001/Images/project/IMG_20210815_210457.jpg" style="width:324px;height:576px;"></a>

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

## Mount Potentiometer

  <a href="/EP1001/Images/project/Screenshot (194).png"><img src="/EP1001/Images/project/Screenshot (194).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/Screenshot (195).png"><img src="/EP1001/Images/project/Screenshot (195).png" style="width:576px;height:324px;"></a>

This is a mount for the potentiometer so that it stays in place. It will be attached to the smaller gear. The slot is clearance for the small notch on the potentiometer.

## CNC Milling

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

## PCB box

I design a box for the PCB board to make it look clean. Since there is an LED on the board, I decided to make a hole on the cover. I'll use a plastic sheet to cover it up so that the LED will be visible

  <a href="/EP1001/Images/project/Screenshot (198).png"><img src="/EP1001/Images/project/Screenshot (198).png" style="width:576px;height:324px;"></a>

## Assembly

  <a href="/EP1001/Images/project/IMG_20210816_215611.jpg"><img src="/EP1001/Images/project/IMG_20210816_215611.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210816_215604.jpg"><img src="/EP1001/Images/project/IMG_20210816_215604.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/project/IMG_20210816_215618.jpg"><img src="/EP1001/Images/project/IMG_20210816_215618.jpg" style="width:576px;height:324px;"></a>
