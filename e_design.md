# Electronics Design

I will be designing Hello Board with Attiny412. It will need an Led and a Button for Programming. I will be using Autodesk Eagle to design the board.

First, I create a new project and add the Fablab library into Eagle.

I will start with the schematic for the board. It is where I can add all components needed for the board and connect them up. I can also use the schematic for reference later.

Components I used:
- Attiny412
- Capacitor(1uf)
- Resistors(LED and Switch)
- 1x6 header
- 1x3 pinhead
- LED

  <a href="/EP1001/Images/edesign/Screenshot (69).png"><img src="/EP1001/Images/edesign/Screenshot (69).png" style="width:576px;height:324px;"></a>

Once done, I can move on to board layout. This is where I will create channels to connect the components. After creating channels, it's time for the outline of the board. I'll need to change the layer to milling before adding it.

  <a href="/EP1001/Images/edesign/Screenshot (68).png"><img src="/EP1001/Images/edesign/Screenshot (68).png" style="width:576px;height:324px;"></a>

After completing the board layout and schematic, I need to check for any errors like airwire.

Next is to generate the g-code. ULP > pcb-code-setup. Here are the settings I used:

  <a href="/EP1001/Images/edesign/Screenshot (150).png"><img src="/EP1001/Images/edesign/Screenshot (150).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/edesign/Screenshot (151).png"><img src="/EP1001/Images/edesign/Screenshot (151).png" style="width:576px;height:324px;"></a>

The g-codes file can be obtained from the project folder.

  <a href="/EP1001/Images/edesign/Screenshot (152).png"><img src="/EP1001/Images/edesign/Screenshot (152).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/edesign/Screenshot (160).png"><img src="/EP1001/Images/edesign/Screenshot (160).png" style="width:576px;height:324px;"></a>

Now it's ready for CNC milling.
