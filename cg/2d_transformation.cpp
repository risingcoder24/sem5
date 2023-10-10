#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	
//TRANSLATION ON A LINE 

//	int gd = DETECT, gm;
//	int x1, x2, y1, y2, tx, ty;
//	
//	printf("Enter Line points x1, y1: ");
//	scanf("%d %d",&x1, &y1);
//	printf("Enter Line points x2, y2: ");
//	scanf("%d %d", &x2, &y2);
//	
//	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
//	setcolor(3);
//	line(x1,y1,x2,y2);
//	printf("Enter Translation factors tx, ty: ");
//	
//	x1 = x1+tx;
//	y1 = y1+ty;
//	x2 = x2+tx;
//	y2 = y2+ty;
//	setcolor(4);
//	line(x1,y1,x2,y2);
//	getch();
//	closegraph();
//	return 0;

//SCALING ON A LINE 

	int gd = DETECT, gm;
	int x1, x2, y1, y2, x3, y3, x4, y4;
	float sx, sy;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	printf("Enter Line points x1, y1: ");
	scanf("%d %d",&x1, &y1);
	printf("Enter Line points x2, y2: ");
	scanf("%d %d", &x2, &y2);
	printf("Enter scalinf factor sx, sy: ");
	scanf("%f %f",&sx, &sy);
	
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



