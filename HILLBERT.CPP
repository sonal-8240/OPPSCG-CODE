#include<iostream.h>
#include<graphics.h>
//using namespace std;
#include<dos.h>
#include<conio.h>
#include<math.h>

void move(int j, int h, int &x, int &y)
{
 if(j==1)
 y = y-h;
 else if(j==2)
 x = x+h;
 else if(j==3)
 y = y+h;
 else if(j==4)
 x = x-h;
 lineto(x,y);
}
void hilbert(int r,int d,int l,int u,int i,int h,int &x,int &y)
{
  if(i>0)
  {
  i--;
  hilbert(d,r,u,l,i,h,x,y);
  move(r,h,x,y);
  delay(100);
  hilbert(r,d,l,u,i,h,x,y);
  move(d,h,x,y);
  delay(100);
  hilbert(r,d,l,u,i,h,x,y);
  move(l,h,x,y);
  delay(100);
  hilbert(u,l,d,r,i,h,x,y);
  }
}

int main()
{
  int n,x1,y1;
  int x0=50,y0=150,x,y,h=10,r=2,d=3,l=4,u=1;
  cout<<"Give the value of n:";
  cin>>n;
  x=x0;
  y=y0;
  int drive=DETECT, mode;
  initgraph(&drive,&mode,"c:\\turboc3\\bgi");
  moveto(x,y);
  delay(200);
  hilbert(r,d,l,u,n,h,x,y);
  delay(200);
  getch();
  closegraph();
  getch();
  return 0;
}

