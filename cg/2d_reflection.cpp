#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	int a = getmaxx();
	int b = getmaxy();
	int y = b/2;
	int x = a/2;
	line(x,0,x,b);
	line(0,y,a,y);
	int x1 = x+100;
	int y1 = y-100;
	int x2 = x+150;
	int y2 = y-150;
	line(x2,y2,x1,y1);
	line(x2,y+150,x1, y+100);
	getch();
	closegraph();
	return 0;
}
