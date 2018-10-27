#include <graphics.h>
#include <iostream>
#include <math.h>
using namespace std;
void drawline(int x1,int y1,int x2,int y2)
{
  int dx,dy,m,s;
  float xi,yi,x,y;
   dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
s = abs(dx);
    else
s = abs(dy);

    xi = dx / (float) s;
    yi = dy / (float) s;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);

    for (m = 0; m < s; m++)
{
x += xi;
y += yi;
putpixel(x, y, WHITE);
    }

}
int main()
{

    int gd = DETECT, gm, x1=20,y1=120,x2=80,y2=120,x3=50,y3=78;
    //x1=20, y1=20, x2=80, y2=20, x3=50, y3=76;
    //x1=20, y1=100, x2=120, y2=100, x3=72, y3=26;
    int cx=((x1+x2+x3)/3),cy=((y1+y2+y3)/3);
    float R,r;

    initgraph(&gd, &gm, NULL);
    drawline(x1,y1,x2,y2);
    drawline(x2,y2,x3,y3);
    drawline(x3,y3,x1,y1);
    R= 60/sqrt(3);
    r=R/2;
    circle(cx,cy,r);
    circle(cx,cy,R);
   delay(5000);
    return 0;
}


