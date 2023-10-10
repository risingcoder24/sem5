#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
   int gd=DETECT, gm;
  
   int  x3, x4, y3, y4;
   int x1=100,y1=100,x2=400,y2=400;
   float angle, theta;
   printf("Enter angle of rotation: ");
   scanf("%f",&angle);
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   setcolor(6);
 
   
   theta = angle * (3.14/180);
   cleardevice();
   
  
   
 
	x3 = (x1*cos(theta)) - (y1*sin(theta));
	y3 = (x1*sin(theta)) + (y1*cos(theta));
	x4 = (x2*cos(theta)) - (y2*sin(theta));
	y4 = (x2*sin(theta)) + (y2*cos(theta));
    setcolor(5);
    
    rectangle(x3,y3,x4,y4);
    
   getch();
   closegraph();
   return 0;
}
