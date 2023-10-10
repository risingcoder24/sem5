#include <stdio.h>
#include <conio.h>
#include <graphics.h>




int main()
{
    int gd=DETECT, gm;

    initgraph(&gd, &gm,"c:\\MinGW\\bin");

    line(150,150,250,250);

    getch();
    closegraph();
    return 0;


}
