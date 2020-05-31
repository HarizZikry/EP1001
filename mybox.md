# My Box

<img src="/EP1000/images/MyBox/mybox_close.png" style="width:172.75px;height:173.75px;"><img src="/EP1000/images/MyBox/mybox_open.png" style="width:149.25px;height:169.25px;">

I can't really explain how it opens and closes so here is [visual](https://youtu.be/Yc6Lb8bLGpo)

[MyBox](MyBox.f3d)

## Step 1: Front

<img src="/EP1000/images/MyBox/mybox_front.png" style="width:180.75px;height:148px;">

- Create new component and sketch on ZX plane
- Draw rectangle from the origin. Dimension rectangle using user parameters
- Draw a line on the left side of rectangle and 2 lines on bottom side of rectangle. Dimension them to the thickness of the box. Draw 2 rectangles between the lines, for the tabs. Dimension them using a formula in terms of the height and length
- Mirror the tabs on the left side to right
- Extrude the rectangle without the tabs

## Step 2: Left

<img src="/EP1000/images/MyBox/mybox_left.png" style="width:144.5px;height:160px;">

- Create new component and sketch on the left face of the front component
- Draw big rectangle. Use colinear to constraint the sides. Dimension the width of rectangle
- Similar to step 1, Add tabs on all sides except the top
- Extrude it without the tabs
- Mirror front and left using construction midplane
- Combine them. Left and Right are the cutting tool

## Step 3: Base

<img src="/EP1000/images/MyBox/mybox_base.png" style="width:214.25px;height:171.25px;">

- New component and sketch on bottom face of any of the component
- Draw rectangle. Dimension them so that they have allowance on all sides, I use thickness
- For the back side, add extra allowance
- Extrude then combine. the sides will be cutting tool

## Step 4: Top

<img src="/EP1000/images/MyBox/mybox_top.png" style="width:229.75px;height:99.5px;">

- New component and sketch on top face of component
- Draw rectangle and Dimension it. Similar to base, extend the backside
- Extrude
- New sketch on top face. Draw small rectangle, this is the handle. Dimension it then extrude

## Why use parameters

|    3mm thickness    |       5mm thickness        |
|--------|:------------------------------------------------|
| <img src="/EP1000/images/MyBox/mybox_3mm.png" style="width:257px;height:310px;">  | 	<img src="/EP1000/images/MyBox/mybox_5mm.png" style="width:240px;height:324.5px;"> |

I'm able to change the thickness of the box by editing the user parameter instead of edit sketch
