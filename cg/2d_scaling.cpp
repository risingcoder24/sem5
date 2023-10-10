#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	int gd = DETECT, gm;
	int x1, x2, y1, y2, x3, y3, x4, y4;
	float sx, sy;
   
	printf("Enter Line points x1, y1: ");
	scanf("%d %d",&x1, &y1);
	printf("Enter Line points x2, y2: ");
	scanf("%d %d", &x2, &y2);
	printf("Enter scalinf factor sx, sy: ");
	scanf("%f %f",&sx, &sy);
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setcolor(3);
	line(x1,y1,x2,y2);
	outtextxy(x2+2, y2+2, "Before scaling");
	
	x3 = x1*sx;
	y3 = y1*sy;
	x4 = x2*sx;
	y4 = y2*sy;;
	setcolor(4);
	line(x3,y3,x4,y4);
	outtextxy(x4 + 2, y4 + 2, "After scaling");
	getch();
	closegraph();
	return 0;
}
