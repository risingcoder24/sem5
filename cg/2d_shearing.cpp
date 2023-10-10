#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h>

using namespace std;

int main(){
	int gd = DETECT, gm;
	int arr[] = {100, 100, 300, 100, 300, 300, 100, 300, 100, 100};
	float shx;

	
	printf("Enter shear factor shx: ");
	scanf("%f",&shx);
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	drawpoly(5,arr);
	setcolor(6);
	int arr1[] = {(100+(100*shx)),100,
	(300+(100*shx)),100,
	(300+(300*shx)),300,
	(100+(300*shx)),300,
	(100+(100*shx)),100};

	drawpoly(5,arr1);
	setcolor(7);
	getch();
	closegraph();
	return 0;
	
}
