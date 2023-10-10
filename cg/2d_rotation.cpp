#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	
	
	int gd = DETECT, gm;
	int x1, x2, y1, y2, x3, y3, x4, y4;
	float angle, theta;
   
	printf("Enter Line points x1, y1: ");
	scanf("%d %d",&x1, &y1);
	printf("Enter Line points x2, y2: ");
	scanf("%d %d", &x2, &y2);
	printf("Enter angle of rotation: ");
	scanf("%f",&angle);
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setcolor(6);
	line(x1,y1,x2,y2);
	outtextxy(x2+2, y2+2, "Before rotation");
	theta = angle * (3.14/180);
	
	x3 = (x1*cos(theta)) - (y1*sin(theta));
	y3 = (x1*sin(theta)) + (y1*cos(theta));
	x4 = (x2*cos(theta)) - (y2*sin(theta));
	y4 = (x2*sin(theta)) + (y2*cos(theta));
	setcolor(5);
	line(x3, y3, x4, y4);
	outtextxy(x4+2, y4+2, "After rotation");
	getch();
	closegraph();
	return 0;
}
