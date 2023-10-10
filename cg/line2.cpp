#include<graphics.h>
#include<conio.h>
#include<dos.h>

main()
{
	int gd=DETECT, gm;
	
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setbkcolor(RED);
	cleardevice();
	
	setcolor(YELLOW);
	circle(200,200,200);
	
	setcolor(BLACK);
	circle(120,150,20);
	
	setcolor(BLACK);
	circle(270,150,20);
	
	setcolor(BLACK);
	line(125,275,275,275);
    rectangle(100, 600, 800, 400);
    line(195,195, 155, 250);
    line(195,195, 235, 250);
    line(155,250, 235, 250);
	
//    while(!kbhit()){
//    		delay(2000);
//	arc(200, 250, 180, 360, 80);
//	}
    int x=0,y=0;
    while(x<600)
    {
    	if(kbhit())
		{
		    rectangle(100, 600, 800, 400);

			delay(0.5);
			cleardevice();
			
			setcolor(YELLOW);
			circle(200+x,200,200);
	
			setcolor(BLACK);
			circle(120+x,150,20);
	
			setcolor(BLACK);
			circle(270+x,150,20);
		    setcolor(BLACK);
		    
		    line(195+x,195, 155+x, 250);
            line(195+x,195, 235+x, 250);
    		line(155+x,250, 235+x, 250);
    		arc(200+x,250,180,360,80);
    		
    		x++;
    		
		}	
	}
	while(1)
	{
	
            setcolor(YELLOW);
			circle(200+x,200,200);
	
			setcolor(BLACK);
			circle(120+x,150,20);
	
			setcolor(BLACK);
			circle(270+x,150,20);
		    setcolor(BLACK);
		    
		    line(195+x,195, 155+x, 250);
            line(195+x,195, 235+x, 250);
    		line(155+x,250, 235+x, 250);
    		
    		arc(200+x,250,180,360,80);
    		
    		rectangle(100, 600, 800, 400);

    	}
    	
//    rectangle(200, 200, 500, 250);
	
	getch();
	closegraph();
}
