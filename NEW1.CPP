#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
class DDA
{int x1,y1,x2,y2;
public:
DDA(){};
DDA(int n1,int m1,int n2,int m2)
{x1=n1;
y1=m1;
x2=n2;
y2=m2;
}
void read()
{cout<<"enter the value of coordinate(x1,y1,x2,y2):";
cin>>x1>>y1>>x2>>y2;
}
void display()
{cout<<"values are:"<<endl;
cout<<x1<<y1<<x2<<y2;}
void compute()
{
int dx,dy,x,y,xinc,yinc,step;
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
if(dx>dy)
{step=dx;

}
else
{step=dy;}
xinc=dx/step;
yinc=dy/step;
int i=1;
while(i<=step)
{putpixel(x,y,5);
x=x+xinc;
y=y+yinc;
i=i+1;
//delay(200);
}
}};
void main() { clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
circle(264,185,54);
//DDA obj,obj1,obj2;
//obj.read();
//obj1.read();
//obj2.read();
//obj.display();
//obj.compute();
//obj1.compute();
//obj2.compute();
//line(320,50,500,240);
DDA s1(320,50,320,240);
DDA s2(320,50,130,240);
DDA s3(130,240,320,240);
s1.compute();
//line(100,240,320,50);
s2.compute();
s3.compute();
//delay(20);
getch();
 //correct co-ordinate for triangle is
 //320,50,320,240
 //320,50,130,240
//130,240,320,240
//circle(200,180,50);
 }