# Chess Knight

<img src="/EP1000/images/ChessKnight/knight.png" style="width:259.5px;height:370px;"><br>

## How it's done

1. Find an image of the chess piece on google. It will be used as a canvas to aid in the design.
2. Draw a construction rectangle dimensions 50 by 30 mm. Coincide the midpoint of the rectangle to the origin. It will act as a guide.
3. Insert the image as a canvas. Adjust the position and the scale to fit in the construction rectangle
4. Draw the base. Use the canvas to trace the outline of the base. Only do half the base as I will use revolve. Once done sketch, Revolve.
5. Create an offset plane from the top face of the initial base. Draw a circle with a smaller diameter than the initial base. Use loft to combine the 2 shapes.

<img src="/EP1000/images/ChessKnight/knight_base.png" style="width:410.5px;height:249.5px;"><br>

6. Create a new sketch on XZ plane. Use the canvas to draw the outline of the knight's body. Use fit point spline for complex shapes. Once done, extrude appropriately by using the base as a guide.
7. Next, I sketch the head of the knight. Same procedure as step 6. However, extrude it larger than the body.
8. Next, I sketch the mane of the knight, Same as step 6 and 7. Extrude it smaller than the body.

<img src="/EP1000/images/ChessKnight/knight_sketch.png" style="width:363.5px;height:355px;"><br>

9. I sketch eyes on the face of the head. Cut it all
10. Almost done, I remove sharp edges using fillet and chamfer.

[Click here to download Chess Knight](/Fusion360/chess_knight.f3d)
