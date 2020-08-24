# Computer Controlled Cutting

## Design a parametric box

Firstly, I need to create the parameters for the box. This is under modify tab, change parameters. Here are my parameters:

<a href="images/lasercut/box_para.png"><img src="/EP1000/images/lasercut/box_para.png" style="width:280.25px;height:63.5px;"></a>

Next, I create a new component and sketch for side 1. After sketching, I extrude out according to the thickness. I did this for the front, right and bottom of the box. Here are some screenshots:

<a href="images/lasercut/box_sketch1.png"><img src="/EP1000/images/lasercut/box_sketch1.png" style="width:215.75px;height:168.25px;"></a> <a href="images/lasercut/box_sketch2.png"><img src="/EP1000/images/lasercut/box_sketch2.png" style="width:233.5px;height:286.5px;"></a>

after that, I create midplane for the 3 sides then mirror the sides according to midplane. Next, I combine all the sides to complete the box. Here is the result:

<a href="images/lasercut/box_combine.png"><img src="/EP1000/images/lasercut/box_combine.png" style="width:324px;height:325.5px;"></a>

Next I need to save sides as dxf. I will create a new sketch for the 3 sides then save it as dxf. After doing so, I will import the files in inkscape then save it as 1 dxf file. This is to prepare it for laser cutting. Here it is:

<a href="images/lasercut/box_dxf.png"><img src="/EP1000/images/lasercut/box_dxf.png" style="width:480px;height:270px;"></a>

**Here are the files:**
- [Box.svg](/Fusion360/Box.svg)
- [Box.f3d](/Fusion360/Box.f3d)

## Press-fit construction

I decided to create a small press-fit box with dimensions 35mm by 35mm by 35mm. Similar to **Box**, I create the components and sketches then extrude. I decided to put a circle in the middle for the sides and triangle for the top/bottom to spice things up.

<a href="images/lasercut/KT_sketch.png"><img src="/EP1000/images/lasercut/KT_sketch.png" style="width:480px;height:270px;"></a> <a href="images/lasercut/KT_final.png"><img src="/EP1000/images/lasercut/KT_final.png" style="width:480px;height:270px;"></a>

After doing so, I save the sketches as dxf and create a new dxf file with all the sides, using Inkscape. The kids toy is ready for laser cut.

<a href="images/lasercut/KT_dxf.png"><img src="/EP1000/images/lasercut/KT_dxf.png" style="width:480px;height:270px;"></a>

Heres how it turned out, I'm happy eith the result. It looks cool:

<a href="images/lasercut/box1.jpg"><img src="/EP1000/images/lasercut/box1.jpg" style="width:230.4px;height:172.8px;"></a> <a href="images/lasercut/box2.jpg"><img src="/EP1000/images/lasercut/box2.jpg" style="width:172.8px;height:230.4px;"></a>
