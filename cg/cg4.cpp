#include<iostream>
#include<conio.h>
#include<graphics.h>
void drawCircle(int x, int y, int cx, int cy);
int main()
{
int gd = DETECT, gm;
int r=150, cx=200, cy=200, pk, x, y;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");
pk = 1 - r;
x = 0;
y = r;
while(x < y)
{
drawCircle(x,y,cx,cy);
++x;
if(pk < 0)
{
pk = pk + (2*x) + 1;
}
else
{
--y;
pk = pk + (2*x) + 1 - (2*y);
}
}
getch();
closegraph();
return 0;
}
void drawCircle(int x, int y, int cx, int cy)
{
putpixel(x+cx,y+cy,LIGHTGREEN);
putpixel(-x+cx,y+cy,LIGHTGREEN);
putpixel(x+cx, -y+cy,LIGHTGREEN);
putpixel(-x+cx, -y+cy, LIGHTGREEN);
putpixel(y+cx, x+cy, LIGHTGREEN);
putpixel(y+cx, -x+cy, LIGHTGREEN);
putpixel(-y+cx, x+cy, LIGHTGREEN);
putpixel(-y+cx, -x+cy, LIGHTGREEN);
}
