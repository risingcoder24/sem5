#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>

void move(int j, int h, int x, int y)
{
	if(j==1)
	y-=h;
	else if(j==2)
	x+=h;
	else if(j==3)
	y+=h;
	else if(j==4)
	x-=h;
}

void hilbert(int r, int d, int l, int u, int i, int h, int x, int y)
{
	if(i>0)
	{
		i--;
		hilbert(d,r,u,l,i,h,x,y);
		move(r,h,x,y);
		delay(100);
		hilbert(r,d,l,u,i,h,x,y);
		move(d,h,x,y);
		delay(100);
		hilbert(r,d,l,u,i,h,x,y);
		move(l,h,x,y);
		delay(100);
		hilbert(u,l,d,r,i,h,x,y);
		
	}
}

int main()
{
	int n, x1,y1;
	int gm,gd=DETECT;
	int x0=50,y0=150,x,y,h=10,r=2,d=3,l=4,u=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	x=x0;y=y0;
	
	initgraph(&gd,&gm,"NULL");
	moveto(x,y);
	hilbert(r,d,l,u,n,h,x,y);
	delay(100);
	closegraph();
	
	return 0;
	
}
