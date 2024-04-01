#include <iostream>
#include<string.h>
#include<exception>
using namespace std;
class publication
{
protected:
char title[50];
float price;
public:
publication()
{
price = 0.0;

strcpy(title," ");
}

publication(char t[],float p)
{
strcpy(title,t);
price = p;
}
};
class book : public publication
{
int pagecount; 
public:
book()
{
pagecount=0;
}
book(char t[],float p, int pc):publication(t,p)
{
pagecount=pc;
}
void display()
{
cout<<"Title :"<<title<<endl; 
cout<<"Price: "<<price<<endl; 
cout<<"Pagecount :"<<pagecount<<endl;
}
};
class tape : public publication
{
float time;
public: 
tape()
{
time=0.0;
}
tape(char t[],float p,float tim):publication(t,p)
{
time=tim;
}
void display()
{
cout<<"Title :"<<title<<endl; 
cout<<"Price: "<<price<<endl;
cout<<"Playing time in minutes :"<<time<<endl;
}
};
int main()
{
char title1[50];
float price1;
int pagec,min;
cout<<"\n\n\n\n&*&*&*&*&*&*&*&*&*&*Enter the Specification of Book *&*&*&*&*&*&*&*&*&*&\n\n\n\n";
cout<<"Enter the book title = ";
cin>>title1;
cout<<"Enter the book price = "; 
cin>>price1;
cout<<"Enter the book pagecount = ";
cin>>pagec;
cout<<"Enter the playing time in minutes = ";
cin>>min;
try {
if(price1>0)
{
cout<<endl<<"##########  BOOK DATA  ##########"<<endl;
book b1(title1,price1,pagec);
b1.display();
cout<<endl<<"########## TAPE DATA ##########"<<endl;
tape c1(title1,price1,min);
c1.display();
}
else
throw 0;
}
catch(int num_exception)
{
strcpy(title1,"NULL");
cout<<"exception occurs";
cout<<endl<<"$$$$$$$$$$ BOOK DATA $$$$$$$$$$"<<endl;
book b1(title1,0,0);
b1.display();
cout<<endl<<"$$$$$$$$$$ TAPE DATA $$$$$$$$$$"<<endl;
tape c1(title1,0,0);
c1.display();
}
return 0;
}
