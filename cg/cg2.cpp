//#include<graphics.h>
//int main(){
//	int gd=DETECT, gm;
//	initgraph(&gd,&gm,(char*)"");
//	//point(100,100);
//	line(100,100,200,200);
//	getch();
//	closegraph();
//	return 0;
//}

//#include<graphics.h>
//int main(){
//	int gd =  DETECT, gm;
//	initgraph(&gd, &gm, (char*)"");
//	rectangle(200,200,600,400);
//	getch();
//	closegraph();
//	return 0;
//}

#include<graphics.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm, (char*)"");
	circle(100,100,100);
	getch();
	closegraph();
	return 0;
}

