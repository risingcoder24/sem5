
//Implementation of Bspline curve

#include <stdio.h>
#include <graphics.h>
#include <conio.h> 


int BSplineCurve(const Dot &point1, 
                  const Dot &point2, 
                  const Dot &point3,
                  const Dot &point4, 
                  const double t,
                  Dot &result)
{
    const double t2 = t * t;
    const double t3 = t2 * t;
    const double mt = 1.0 - t;
    const double mt3 = mt * mt * mt;

    const double bi3 = mt3;
    const double bi2 = 3 * t3 - 6 * t2 + 4;
    const double bi1 =-3 * t3 + 3 * t2 + 3 * t + 1;
    const double bi  = t3;

    result.x = point1.x * bi3 + 
               point2.x * bi2 +
               point3.x * bi1 +
               point4.x * bi;
    result.x /= 6.0;

    result.y = point1.y * bi3 + 
               point2.y * bi2 +
               point3.y * bi1 +
               point4.y * bi;
    result.y /= 6.0;
}
