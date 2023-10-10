
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#include<process.h>
#include<graphics.h>

void boundaryFill4(int x, int y, int fill_color, int boundary_color)
{
if (getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
{
putpixel(x, y, fill_color);
boundaryFill4(x + 1, y, fill_color, boundary_color); 
boundaryFill4(x, y + 1, fill_color, boundary_color);
boundaryFill4(x - 1, y, fill_color, boundary_color); 
boundaryFill4(x, y - 1, fill_color, boundary_color);
}
}

void boundaryFill8(int x, int y, int fill_color, int boundary_color)
{
if (getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
{
putpixel(x, y, fill_color);
boundaryFill8(x + 1, y, fill_color, boundary_color); 
boundaryFill8(x, y + 1, fill_color, boundary_color); 
boundaryFill8(x - 1, y, fill_color, boundary_color);
 
boundaryFill8(x, y - 1, fill_color, boundary_color); 
boundaryFill8(x - 1, y - 1, fill_color, boundary_color); 
boundaryFill8(x - 1, y + 1, fill_color, boundary_color); 
boundaryFill8(x + 1, y - 1, fill_color, boundary_color); 
boundaryFill8(x + 1, y + 1, fill_color, boundary_color);
}
}
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");
circle(200, 200, 100);
rectangle(300,300,450,450); 
boundaryFill4(200,200,5,15);
boundaryFill8(355, 355, 6, 15); 
getch();
closegraph(); 
return 0;
}


