# 3D Machining

I will be using Fusion360 to design a mold then create a g-code for the Stepcraft. We will be using same CNC machine used for milling the PCB boards.

The overall dimension of the mold is 50mm by 50mm and height of 20mm. The walls have taper angle of 5 degree to help with removing of mold from the model. I designed a simple cone using loft feature.

Next, I'm going to create 3D toolpath. We will be using a 3mm flat end mill as the cutter. Unlike 2D machining, that uses 2d contour, we will be using Adaptive clearing. There will be 2 toolpaths, base outline and model outline.

Here are the settings:

Once done, I will need to generate g-code for Stepcraft. This can be done by using post process. I will to select the correct machine before generating the g-code
