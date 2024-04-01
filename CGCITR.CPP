// CG circle inside triangle

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

//LINE
class Number
{

int x1,y1,x2,y2;
public:
Number(){};
Number(int a,int b,int c,int d)
{
x1=a;
y1=b;
x2=c;
y2=d;
}

void compute()
{
    int i;
    float dx,dy,xinc,yinc,step,x,y;

dx=x2-x1;
dy=y2-y1;

if(abs(dx)>abs(dy))
   step=abs(dx);
else
   step=abs(dy);
xinc=dx/step ;
yinc=dy/step ;

x=x1;
y=y1;

for(i=0;i<=step;i++)
{
putpixel(x,y,3);
delay(10);
x=x+xinc;
y=y+yinc;
}
    }

};

class brcircle
{
	int r,xc,yc;
public:
	brcircle(int rr,int x1,int y1)
	{
		r = rr;
		xc= x1;
		yc= y1;
	};


       void drawCircle()
	{
	int x=0,y=r;
	int S = 3 - 2*r;
	putpixel(xc,yc,WHITE);
	plot8WaySymmetry(x,y);

	while(x<=y){
	if (S<=0){
		S = S+4*x+6;
		x++;
	plot8WaySymmetry(x,y);
	}
	else{
			S = S +4*(x-y)+10;
			x++;
			y--;
			plot8WaySymmetry(x,y);

	}


}
}
	void plot8WaySymmetry(int x,int y)
       {
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);


	delay(20);
       }
};

int main()
{

clrscr();
brcircle n1(41,320,321);//n2(107,320,321);
Number l1(220,362,320,262),l2(320,262,420,362),l3(420,362,220,362);
//brcircle n1(41,320,321),n2(100,320,321);
//Number l1(220,362,320,262),l2(320,262,420,362),l3(420,362,220,362);


int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
n1.drawCircle();
//n2.drawCircle();
l1.compute();
l2.compute();
l3.compute();

getch();
closegraph();
return 0;

}
