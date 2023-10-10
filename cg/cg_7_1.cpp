#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <process.h> 
#include <graphics.h>

void floodFill(int x, int y, int fill_color, int old_color)
{
if (getpixel(x, y) == old_color)
{

putpixel(x, y, fill_color);

floodFill(x + 1, y, fill_color, old_color); 
floodFill(x, y + 1, fill_color, old_color); 
floodFill(x - 1, y, fill_color, old_color); 
floodFill(x, y - 1, fill_color, old_color);
}
}

int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

circle(200, 200, 100); floodFill(200,200,10,0); getch();
closegraph(); return 0;
}

