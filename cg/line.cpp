#include <graphics.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(320,240,200);
	line(150,150,200,200);
	getch();
	closegraph();
	return 0;
}
