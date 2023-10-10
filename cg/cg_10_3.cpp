#include <conio.h> 
#include <iostream> 
#include <graphics.h> 
#include <process.h>

#define ROUND(a) ((int)(a + 0.5)) 
using namespace std;
struct _line
{
int x1, y1; int x2, y2;
};

int xmax, xmin, ymax, ymin;

void clip(_line a)
{
int p[4], q[4], i, dx, dy, flag = 1; double u1 = 0, u2 = 1, temp;
dx = a.x2 - a.x1;
dy = a.y2 - a.y1;
p[0] = -dx;
q[0] = a.x1 - xmin; p[1] = dx;
q[1] = xmax - a.x1;
p[2] = -dy;
q[2] = a.y1 - ymin; p[3] = dy;
q[3] = ymax - a.y1;

if (p[0] == 0 && p[3] == 0)
{
if (a.x1 >= xmin && a.x1 <= xmax && a.y1 >= ymin && a.y1 <= ymax) putpixel(a.x1, a.y1, GREEN);
else
return;
}









if (p[0] == 0)
if (q[0] * q[1] <= 0) return;
if (p[2] == 0)
if (q[2] * q[3] <= 0)
return;

for (i = 0; i < 4; i++)
{
if (p[i] < 0 && flag)
{
temp = (double)q[i] / (double)p[i]; if (temp > u2)
flag = 0;
else if (temp > u1) u1 = temp;
}
else if (p[i] > 0 && flag)
{
temp = (double)q[i] / (double)p[i]; if (temp < u1)
flag = 0;
else if (temp < u2) u2 = temp;
}
}
if (u1 >= u2 || flag == 0) return;
temp = a.x1; i = a.y1;
a.x1 = temp + u1 * dx; a.x2 = temp + u2 * dx; a.y1 = i + u1 * dy; a.y2 = i + u2 * dy;
line(319 + ROUND(a.x1), 240 - ROUND(a.y1), 319 + ROUND(a.x2), 240 - ROUND(a.y2));
}

void drawWindow(int xmin, int ymin, int xmax, int ymax)
{
line(319 + xmin, 240 - ymax, 319 + xmax, 240 - ymax); // Top Edge line(319 + xmax, 240 - ymax, 319 + xmax, 240 - ymin); // Right Edge line(319 + xmax, 240 - ymin, 319 + xmin, 240 - ymin); // Bottom Edge line(319 + xmin, 240 - ymin, 319 + xmin, 240 - ymax); // Left Edge
}





int main()
{
int gd = DETECT, gm, n, i;
_line *a;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");
cout << "Enter the window coordinates : \n"; cout << "Lower Left Corner : ";
cin >> xmin >> ymin;

cout << "Upper Right Corner : "; cin >> xmax >> ymax;
if (xmax < xmin || ymax < ymin)
{
cout << "\nIncorrect Window"; getch();
exit(0);
}

cout << "How many lines do you want to draw : "; cin >> n;
a = new _line[n];
cout << "Enter Coordinates : \n"; for (i = 0; i < n; i++)
{
cout << "line " << i + 1 << " : ";
cout << "Enter coordinates of Ist Vertex" << endl; cout << "x1 =";
cin >> a[i].x1; cout << "y1 ="; cin >> a[i].y1;

cout << "Enter coordinates of IInd Vertex" << endl; cout << "x2 =";
cin >> a[i].x2; cout << "y2 ="; cin >> a[i].y2;
}

initgraph(&gd, &gm, (char *)""); outtextxy(0, 5, "The original Line is");

for (i = 0; i < n; i++)
line(319 + a[i].x1, 240 - a[i].y1, 319 + a[i].x2, 240 - a[i].y2);
getch();




setcolor(LIGHTGREEN);
outtextxy(0, 20, "The Clipping Window is");

drawWindow(xmin, ymin, xmax, ymax); getch();
cleardevice();
drawWindow(xmin, ymin, xmax, ymax); setcolor(WHITE);
outtextxy(0, 5, "The Clipped line is"); for (i = 0; i < n; i++)
clip(a[i]); getch(); closegraph(); restorecrtmode();
}

