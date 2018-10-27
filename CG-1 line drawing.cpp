//CG-1:DDA Line Drawing




#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
class pixele
{
  private:
  float x,y,x1,x2,y1,y2,a,b,c,d,length,i;
  public:
  void dda();
 };
void pixele::dda()
 {
  float x,y,a,b;
  cout<<"\n enter coordinate for starting point ";
  cin>>x1>>y1;
  //cout<<"\n x2= ";
//cin>>x2;
  cout<<"\n enter coordinate for starting point ";
  cin>>x2>>y2;
  c=x2-x1;
  cout<<"\n c="<<c;
  d=y2-y1;
  cout<<"\n d="<<d;
   if(c>=d)
  {
   length=x2-x1;
   cout<<"\n LENGTH="<<length;
  
  }
  else
  {
    length=y2-y1;
    }
   a=c/length;
  cout<<"\n a="<<a;
  
   b=d/length;
  cout<<"\n b="<<b;
  
   x=x1+0.5;
  cout<<"\n x="<<x;
  
   y=y1+0.5;
  cout<<"\n y="<<y;
  int i=1; 
    while(i<=length)
 {
 putpixel(x,y,WHITE);
  
   x=x+a;

   cout<<"\n x="<<x;
   y=y+b;
   cout<<"\n y="<<y;
   i=i+1;
  
 }
 }
int main()
{
  int gd=DETECT ,gm=VGAMAX;
  float x,y,a,b,length;
  pixele p;
  initgraph(&gm,&gd,NULL);
 int i=1;
 p.dda();

 delay(500000);
return 0;
} 
 
 
