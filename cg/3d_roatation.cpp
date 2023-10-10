#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int maxx,maxxy,midx,midy;

void axis(){
	
	getch();
	cleardevice();
	line(midx,0,midy,maxy);
	line(0,midy,maxx,midy);
}

void main(){
	
	int x, y, z, o, x1,y1;
	int gd = DETECT, gm;
	initgraph(&gd,&gm, "c:\\turboc3\\bgi");
	
	 maxx=getmaxx();
     maxy=getmaxy();
     midx=maxx/2;
     midy=maxy/2;
axis();
bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
printf("Enter rotating angle");
scanf("%d",&o);
 x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
 y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);
 x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
 y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);
 axis();
printf("After rotation about z axis");
bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1);
axis();
printf("After rotation  about x axis");
bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);
axis();
printf("After rotation about yaxis");
bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);
getch();
closegraph();  
	    
}    
