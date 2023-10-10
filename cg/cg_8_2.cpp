#include <stdio.h> 
#include <stdlib.h> 
#include <dos.h> 
#include <graphics.h> 
#include <conio.h>
 
void move(int a, int b, int &x, int &y)
{
if (a == 1) y -= b;
else if (a == 2) x += b;
else if (a == 3) y += h;
else if (a == 4) x -= b;
lineto(x, y); 
delay(10);
}

void hilbert(int r, int d, int l, int u, int i, int h, int &x, int &y)
{
if (i > 0)
{
i--;
hilbert(d, r, u, l, i, h, x, y); 
move(r, h, x, y);
hilbert(r, d, l, u, i, h, x, y); 
move(d, h, x, y); 
hilbert(r, d, l, u, i, h, x, y); 
move(l, h, x, y);
hilbert(u, l, d, r, i, h, x, y);
}
}

int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
int n, x1, y1;
int x0 = 50, y0 = 150, x, y, h = 10, r = 2, d = 3, l = 4, u = 1;
printf("\nGive the value of n: "); 
scanf("%d", &n);
x = x0; y = y0;
moveto(x, y);
hilbert(r, d, l, u, n, h, x, y); 
getch();
closegraph();
}

