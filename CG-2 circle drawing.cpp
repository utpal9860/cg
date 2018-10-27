#include<iostream>
#include <graphics.h>
using namespace std;
class lin
{
public:

	  int x1,y1;
	  void drawlin(int x1,int y1,int radius);

};

class brecircle:public lin  

{
public:

	void init();
	void bresenhmcircle(int x1,int y1,int radius);

};

void brecircle::init()
{

	int gd=DETECT,gm,x,y;		

	initgraph(&gd,&gm,"NULL");  

}

void lin::drawlin(int x1,int y1,int radius)

{

	int x2=x1;

	int y2=y1-radius;

	line(x1,y1,x2,y2);

}

void brecircle::bresenhmcircle(int x1,int y1,int radius)

{

	int d,x,y;

	x=0;

	y=radius;

	putpixel(x,y,15);

	d=3-2*radius;

	this->x1=x1;

	this->y1=y1;

	while(x<=y)

	{

		putpixel(x1,y1,15);

		if(d<0) 
		{
			d=d+4*x+6;
			x=x+1;
		}
		if(d>0)

		{

			d=d+4*(x-y)+10;

			x=x+1;

			y=y-1;

		}

		putpixel(x1,y1,12);

		putpixel(x1+x,y1-y,15);

		putpixel(x1+y,y1-(-x),15);	//Symmetry of circle 

		putpixel(x1+x,y1-(-y),15);

		putpixel(x1+(-y),y1-(-x),15);

		putpixel(x1+(-y),y1-(x),15);

		putpixel(x1+(-x),y1-(y),15);

		putpixel(x1+(-x),y1-(-y),15);

		putpixel(x1+y,y1-x,15);

	}

}
int main()

{

	int x1,y1,radius;

	brecircle b;

        b.init();

       cout<<"\n Enter the value of x1=\n";        cin>>x1;

       cout<<"\n Enter the value of y1=\n";        cin>>y1;

       cout<<"\n Enter the value of radius=\n";        cin>>radius;

       b.drawlin(x1,y1,radius);

       b.bresenhmcircle(x1,y1,radius);
delay(3000);

      // capture("PL-Group A4.bmp");

       return 0;

}
