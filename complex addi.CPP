/*Name: Navle kalyani punjahari
Roll No:12
Assignment No 1*/
#include<iostream.h>
#include<conio.h>
//#include<dog.h>
//using namespace std;
class complex
{
private:
double real;
double imaginary;

public:
complex (){}
complex(double r,double i)
{
real=r;
imaginary=i;
}
complex operator+(const complex& other)
{


double sumreal=real + other.real;
double sumimg=imaginary + other.imaginary;

return complex(sumreal,sumimg);
}
complex operator*(const complex& other)
{
double mulreal=real*other.real-imaginary*other.imaginary;
double mulimg=real*other.imaginary+imaginary*other.real;
return complex(mulreal,mulimg);
}

friend ostream& operator<<(ostream& output, complex& complex)
{
output<<complex.real;
if (complex.real>=0)
output<<"+";
output<<complex.imaginary<<"i";
return output;
}
friend istream& operator>>(istream& input, complex& c)
{
cout<<"enter the real part:"<<endl;
input>>c.real;
cout<<"enter the imaginary part:"<<endl;
input>>c.imaginary;
return input;
}
};
int main()
{ clrscr();
complex c1;		//default constructor
complex sum, product;		//default constructor
complex c2(2.5, 3.7);			//parameter constructor
cout<<"enter the complex number :"<<endl;
cin>>c1;
sum=c2+c1;
product=c1*c2;
cout<<"sum:"<<sum<<endl;
cout<<"product:"<<product<<endl;
return 0;
}
/*OUTPUT:
enter the complex number :
enter the real part:
2
enter the imaginary part:
4.6
sum:4.5+8.3i
product:-12.0218.9i
*/





