# Embedded Programming

First, I'll need to configure Arduino so that I can use it to program the boards. I install a library for Attiny, copy and patse this "http://drazzy.com/package_drazzy.com_index.json" under Additional Boards Manger URLs.

  <a href="/EP1001/Images/eprog/Screenshot (185).png"><img src="/EP1001/Images/eprog/Screenshot (185).png" style="width:576px;height:324px;"></a>

Then I need to install megaTinyCore by Spence Konde in Board Manager.

  <a href="/EP1001/Images/eprog/Screenshot (179).png"><img src="/EP1001/Images/eprog/Screenshot (179).png" style="width:576px;height:324px;"></a>

Now I can start to connect the hello board to my laptop. Since my hello board doesn't work due to my poor soldering, I am using Mr. Steven's hello board. I connect the hello board to the FTDI and the UPDI as shown below.

  <a href="/EP1001/Images/eprog/IMG_20210815_173708.jpg"><img src="/EP1001/Images/eprog/IMG_20210815_173708.jpg" style="width:576px;height:324px;"></a>

I'm going to do a simple blink mode for the hello board. Here is the code:

  <a href="/EP1001/Images/eprog/Screenshot (178).png"><img src="/EP1001/Images/eprog/Screenshot (178).png" style="width:576px;height:324px;"></a>

Once done, I run "burn bootloader" first before upload the sketch to the hello board using programmer.

  <a href="/EP1001/Images/eprog/Screenshot (183).png"><img src="/EP1001/Images/eprog/Screenshot (183).png" style="width:576px;height:324px;"></a>

Here is the working program:

<video width="380" height="280" controls=""><source src="EP1001/Images/eprog/video_20210815_173613.mp4" type="video/mp4"></video>
