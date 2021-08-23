# Interface & Applications programming

I used an example from Arduino to see how interfacing works. First I need to install a software called Processing. It is similar to Arduino IDE. There will be 2 codes, processing is for computer input and Arduino IDE for PCB board output.

[Physical Pixel](https://www.arduino.cc/en/Tutorial/BuiltInExamples/PhysicalPixel)

Next, coding for Arduino. I need to include SoftwareSerial library to link the PCB to computer. Define RX and TX. I uploaded it using UPDI programmer. Once done, I will remove the UPDI and connect the PCB directly to FTDI.

  <a href="/EP1001/Images/iap/Screenshot (204).png"><img src="/EP1001/Images/iap/Screenshot (204).png" style="width:576px;height:324px;"></a>

Coding for Processing. The code includes recognizing com port of PCB, creating rectangle box and Mouse cursor.

<a href="/EP1001/Images/iap/Screenshot (202).png"><img src="/EP1001/Images/iap/Screenshot (202).png" style="width:576px;height:324px;"></a>

<a href="/EP1001/Images/iap/Screenshot (203).png"><img src="/EP1001/Images/iap/Screenshot (203).png" style="width:576px;height:324px;"></a>

When the mousecursor is on the box, the led on PCB will not light up. When the mousecursor is off the box, the led will light up.

<a href="/EP1001/Images/iap/IMG_20210823_074607.jpg"><img src="/EP1001/Images/iap/IMG_20210823_074607.jpg" style="width:576px;height:324px;"></a>

<a href="/EP1001/Images/iap/IMG_20210823_074553.jpg"><img src="/EP1001/Images/iap/IMG_20210823_074553.jpg" style="width:576px;height:324px;"></a>
