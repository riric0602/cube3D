# Cube3D : *My first RayCaster with miniLibX*

> This  project is inspired by the world-famous Wolfenstein 3D game, which was the first FPS ever. It will enable you to explore ray-casting. Your goal will be to make a dynamic view inside a maze, in which you’ll have to find your way.

This project’s objectives are similar to all this first year’s objectives: **Rigor**, use of **C**, use of **basic algorithms**, **information research**, etc.
As a group graphic design project, cub3D enabled me to improve your skills in these areas: windows, colors, events, fill shapes, etc.
The most exciting part for us, as ex Mathematics Majors, was the use of mathematics to create elegant and efficient algorithms.

**Raycasting** is a rendering technique to create a 3D perspective in a 2D map. Back when computers were slower, it wasn't possible to run real 3D engines in realtime, and raycasting was the first solution. Raycasting can go very fast, because only a calculation has to be done for every vertical line of the screen. 
The most well known game that used this technique, is of course Wolfenstein 3D.

Ray casting is the most basic of many computer graphics rendering algorithms that use the geometric algorithm of ray tracing. Ray tracing-based rendering algorithms operate in image order to render three-dimensional scenes to two-dimensional images. Geometric rays are traced from the field of view of the player to sample the light (radiance) travelling toward the observer from the ray direction. In order to actually code all of that, we had to implement the **DDA Algorithm** (Digital Differential Analyzer) which is a line drawing algorithm used in computer graphics to generate a line segment between two specified endpoints. It is a simple and efficient algorithm that works by using the incremental difference between the x-coordinates and y-coordinates of the two endpoints to plot the line.
