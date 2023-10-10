//Implementation of Bspline curve

#include <stdio.h>
#include <graphics.h>
#include <conio.h> 

int BSplineCurve(Dot &ControlPoint1, Dot &ControlPoint2, 
                  Dot &ControlPoint3,Dot &ControlPoint4, 
                  Dot &DrawCurve, double &t){

    double t2 = t * t;
    double t3 = t2 * t;
    double mt3 = (1 - t) * (1 - t) * (1 - t);

    double bi3 = mt3 / 6;
    double bi2 = ((3 * t3) - (6 * t2) + 4) / 6;
    double bi1 = ((-3 * t3) + (3 * t2) + (3 * t) + 1) / 6;
    double bi  = mt3 / 6;

    DrawCurve.x = ControlPoint1.x * bi3;
    DrawCurve.x += ControlPoint2.x * bi2;
    DrawCurve.x += ControlPoint3.x * bi1;
    DrawCurve.x += ControlPoint4.x * bi;

    DrawCurve.y = ControlPoint1.y * bi3;
    DrawCurve.y += ControlPoint2.y * bi2;
    DrawCurve.y += ControlPoint3.y * bi1;
    DrawCurve.y += ControlPoint4.y * bi;
}


double t = 3.f;
do{

    if ((3 < t) && (t <= 4)) {
    BSplineCurve(ControlPoint1, ControlPoint2, ControlPoint3, ControlPoint4, DrawCurve, t);
    Draw1Dot(DrawCurve.x, DrawCurve.y, DrawCurve.R, DrawCurve.G, DrawCurve.B);
    }
    else if ((4 < t) && (t <= 5)) {
    BSplineCurve(ControlPoint2, ControlPoint3, ControlPoint4, ControlPoint5, DrawCurve, t);
    Draw1Dot(DrawCurve.x, DrawCurve.y, DrawCurve.R, DrawCurve.G, DrawCurve.B);
    }
    else if ((5 < t) && (t <= 6)) {
    BSplineCurve(ControlPoint3, ControlPoint4, ControlPoint5, ControlPoint6, DrawCurve, t);
    Draw1Dot(DrawCurve.x, DrawCurve.y, DrawCurve.R, DrawCurve.G, DrawCurve.B);
    }
    t += 0.001;
} while(t < 6.001);



int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

float temp1, temp2;
for (int i = 0; i < 4; i++)
{
printf("Enter (x,y) coordinates of point %d : ", i + 1); scanf("%f%f", &temp1, &temp2);
putpixel(temp1, temp2, 13); xxx[i][0] = temp1;
xxx[i][1] = temp2;
}
bezier(xxx[1][0], xxx[1][1], xxx[2][0], xxx[2][1], xxx[3][0], xxx[3][1], 8); getch();
closegraph();
}

//Implementation of Bspline curve

#include <stdio.h>
#include <graphics.h>
#include <conio.h> 

int BSplineCurve(Dot &ControlPoint1, Dot &ControlPoint2, 
                  Dot &ControlPoint3,Dot &ControlPoint4, 
                  Dot &DrawCurve, double &t){

    double t2 = t * t;
    double t3 = t2 * t;
    double mt3 = (1 - t) * (1 - t) * (1 - t);

    double bi3 = mt3 / 6;
    double bi2 = ((3 * t3) - (6 * t2) + 4) / 6;
    double bi1 = ((-3 * t3) + (3 * t2) + (3 * t) + 1) / 6;
    double bi  = mt3 / 6;

    DrawCurve.x = ControlPoint1.x * bi3;
    DrawCurve.x += ControlPoint2.x * bi2;
    DrawCurve.x += ControlPoint3.x * bi1;
    DrawCurve.x += ControlPoint4.x * bi;

    DrawCurve.y = ControlPoint1.y * bi3;
    DrawCurve.y += ControlPoint2.y * bi2;
    DrawCurve.y += ControlPoint3.y * bi1;
    DrawCurve.y += ControlPoint4.y * bi;
}


double t = 3.f;
do{

    if ((3 < t) && (t <= 4)) {
    BSplineCurve(ControlPoint1, ControlPoint2, ControlPoint3, ControlPoint4, DrawCurve, t);
    Draw1Dot(DrawCurve.x, DrawCurve.y, DrawCurve.R, DrawCurve.G, DrawCurve.B);
    }
    else if ((4 < t) && (t <= 5)) {
    BSplineCurve(ControlPoint2, ControlPoint3, ControlPoint4, ControlPoint5, DrawCurve, t);
    Draw1Dot(DrawCurve.x, DrawCurve.y, DrawCurve.R, DrawCurve.G, DrawCurve.B);
    }
    else if ((5 < t) && (t <= 6)) {
    BSplineCurve(ControlPoint3, ControlPoint4, ControlPoint5, ControlPoint6, DrawCurve, t);
    Draw1Dot(DrawCurve.x, DrawCurve.y, DrawCurve.R, DrawCurve.G, DrawCurve.B);
    }
    t += 0.001;
} while(t < 6.001);



int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

float temp1, temp2;
for (int i = 0; i < 4; i++)
{
printf("Enter (x,y) coordinates of point %d : ", i + 1); scanf("%f%f", &temp1, &temp2);
putpixel(temp1, temp2, 13); xxx[i][0] = temp1;
xxx[i][1] = temp2;
}
bezier(xxx[1][0], xxx[1][1], xxx[2][0], xxx[2][1], xxx[3][0], xxx[3][1], 8); getch();
closegraph();
}
{


