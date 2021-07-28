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

Once done, I can move on to board layout. This is where I will create channels to connect the components. After creating channels, it's time for the outline of the board. I'll need to change the layer to milling before adding it.

After completing the board layout and schematic, I need to check for any errors like airwire.

Next is to generate the g-code. ULP > pcb-code-setup. Here are the settings I used:

The g-codes file can be obtained from the project folder.

Now it's ready for CNC milling.
