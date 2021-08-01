# 3D Machining

I will be using Fusion360 to design a mold then create a g-code for the Stepcraft. We will be using same CNC machine used for milling the PCB boards.

The overall dimension of the mold is 50mm by 50mm and height of 20mm. The walls have taper angle of 5 degree to help with removing of mold from the model. I designed a simple donut using torus feature.

  <a href="/EP1001/Images/3dmach/Screenshot (165).png"><img src="/EP1001/Images/3dmach/Screenshot (165).png" style="width:576px;height:324px;"></a>

Next, I'm going to create 3D toolpath. We will be using a 3mm flat end mill as the cutter. Unlike 2D machining, that uses 2d contour, we will be using Adaptive clearing. There will be 2 toolpaths, base outline and model outline.

Here are the settings:

  <a href="/EP1001/Images/3dmach/Screenshot (166).png"><img src="/EP1001/Images/3dmach/Screenshot (166).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/3dmach/Screenshot (167).png"><img src="/EP1001/Images/3dmach/Screenshot (167).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/3dmach/Screenshot (168).png"><img src="/EP1001/Images/3dmach/Screenshot (168).png" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/3dmach/Screenshot (170).png"><img src="/EP1001/Images/3dmach/Screenshot (170).png" style="width:576px;height:324px;"></a>

Once done, I will need to generate g-code for Stepcraft. This can be done by using post process. I will to select the correct machine before generating the g-code

  <a href="/EP1001/Images/3dmach/Screenshot (171).png"><img src="/EP1001/Images/3dmach/Screenshot (171).png" style="width:576px;height:324px;"></a>

It's machining time. First, I need to cut the stock foam with dimensions 100mm by 100mm. Next, I covered the base with double-sided tape so that it does not come off midway machining. Then, I marked out the center of the stock, this is the origin point of the mold model. I placed the stock on the mill table and put the 3mm flat end mill on. I set the reference points and start the operation. During the operation, I constantly needed to vacuum the foam dust. The whole operation took nearly 1hr. I am satisfied with the finishing of the mold but it's abit small.

  <a href="/EP1001/Images/3dmach/IMG_20210726_163144.jpg"><img src="/EP1001/Images/3dmach/IMG_20210726_163144.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/3dmach/IMG_20210726_163148.jpg"><img src="/EP1001/Images/3dmach/IMG_20210726_163148.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/3dmach/IMG_20210726_170353.jpg"><img src="/EP1001/Images/3dmach/IMG_20210726_170353.jpg" style="width:576px;height:324px;"></a>

  <a href="/EP1001/Images/3dmach/IMG_20210726_172510.jpg"><img src="/EP1001/Images/3dmach/IMG_20210726_172510.jpg" style="width:576px;height:324px;"></a>
