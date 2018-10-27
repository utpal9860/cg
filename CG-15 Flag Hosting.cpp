#include<iostream>
#include<graphics.h>
#include<stdlib.h>

using namespace std;
int main()
{
int gd=DETECT,gm,i,j=0;
initgraph(&gd,&gm,NULL);
delay(100);
setcolor(6);
rectangle(225,125,355,155);
delay(300);

setcolor(7);
rectangle(225,155,355,185);
j=0;

delay(300);
setcolor(2);
rectangle(225,185,355,215);
j=0;

delay(300);
setcolor(9);
rectangle(220,120,225,440);
j=0;

delay(300);
rectangle(200,440,245,450);
rectangle(190,450,260,460);
rectangle(175,460,275,470);
delay(300);
int s=1;
do
{
setcolor(BLUE);
circle(291,170,13);
delay(100);
if(s%2==0)
{
setcolor(BLUE);
line(291,158,291 ,183);
delay(100);
line(279,170,303,170);
delay(100);
setcolor(BLACK);
line(291,158,291 ,183);
line(279,170,303,170);
delay(100);
}
else if(s%2==1)
{
setcolor(BLUE);
line(282,160,300,180);
delay(100);
line(282,180,300,160);
setcolor(BLACK);
line(282,160,300,180);
line(282,180,300,160);
delay(100);
}
setcolor(BLUE);
line(291,158,291 ,183);
line(279,170,303,170);
line(282,160,300,180);
line(282,180,300,160);
delay(100);
setcolor(BLACK);
line(291,158,291 ,183);
line(279,170,303,170);
line(282,160,300,180);
line(282,180,300,160);

s++;
}while(s!=0);
//settextstyle(3,0,7);	
setcolor(5);
//outtextxy(100,5,"INDIAN FLAG");
delay(1000);
return 0;
closegraph();
}
