//#include <graphics.h>
//#include <iostream>
//#include <conio.h>
//#include <math.h>
// 
//using namespace std;
// 
//void kite()
//{
//    line(200, 200, 300, 100);
//    line(300, 100, 400, 200);
//    line(400, 200, 300, 300);
//    line(300, 100, 300, 300);
//    line(300,300,200,200);
//    arc(300, 300, 45, 135, 140);
//    setfillstyle(SOLID_FILL, RED);
// 
//    floodfill(301, 105, WHITE);
//    setfillstyle(SOLID_FILL, RED);
// 
//    floodfill(299, 105, WHITE);
//    setfillstyle(SOLID_FILL, 12);
// 
//    floodfill(299, 275, WHITE);
//    setfillstyle(SOLID_FILL, 12);
// 
//    floodfill(301, 275, WHITE);
//    line(300, 300, 250, 350);
//    line(250, 350, 350, 350);
//    line(300, 300, 350, 350);
//    setfillstyle(SOLID_FILL, 14);
// 
//    floodfill(300, 310, WHITE);
//}
//int main()
//{
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//   
//    kite();
//   
//    getch();
//    closegraph();
// 
//    return 0;
//}

#include<graphics.h>
int main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm,NULL);


line(0,300,640,300);

setcolor(11);


circle(100,285,15); 
circle(200,285,15);
circle(100,285,5);  
circle(200,285,5);

line(65,285,85,285);
line(115,285,185,285);
line(215,285,235,285);
line(65,285,65,260);
line(235,285,235,260);

line(65,260,100,255);
line(235,260,200,255);

line(100,255,115,235);
line(200,255,185,235);

line(115,235,185,235);


line(106,255,118,238);
line(118,238,118,255);
line(106,255,118,255);

line(194,255,182,238);
line(182,238,182,255);
line(194,255,182,255);

line(121,238,121,255);
line(121,238,148,238);
line(121,255,148,255);
line(148,255,148,238);


line(179,238,179,255);
line(179,238,152,238);
line(179,255,152,255);
line(152,255,152,238);
setcolor(4);
//floodfill(150,200,4);

getch();
closegraph();
}
