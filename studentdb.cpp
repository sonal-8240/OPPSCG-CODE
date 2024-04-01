#include<iostream>
#include<string.h>
using namespace std;

class database
{
int rollno;
char name[20];
char classa[50];
char div[10];
char dob[12];
char bg[10],city[10];
char phone[12],license[12];
public:
static int stdno;
static void count()
{
cout<<"\n no of the objects create in the data base of class ";
}
database()
{
rollno=7;
strcpy(name,"sachin");
strcpy(classa,"se");
strcpy(div,"b");
strcpy(dob,"26/07/200");
strcpy(bg,"o+");
strcpy(city,"pune");
strcpy(phone,"238479856");
strcpy(license,"a10230");
}
void getdata()
{
cout<<"enter the :name ,roll,class,div,dob,blood group,city,phone,license";
cin>>name>>rollno>>classa>>div>>dob>>bg>>city>>phone>>license;
}
friend void display(database d);
~database()
{
cout<<"\n"<<this->name<<"\nobject is destroyed!";
}
};
void display (database d)
{
cout<<"\nname="<<d.name;
cout<<"\nroll no="<<d.rollno;
cout<<"\nclass ="<<d.classa;
cout<<"\ndiv="<<d.div;
cout<<"\ndob="<<d.dob;
cout<<"\nblood group="<<d.bg;
cout<<"\ncity="<<d.city;
cout<<"\nphone="<<d.phone;
cout<<"\nlincense="<<d.license;
}
int database::stdno;
int main()
{
int n,i;
database d1,*ptr[5];
cout<<"\ndefalut values";
display(d1);
d1.getdata();
display(d1);
cout<<"\n how many objects u want to create:";
cin>>n;
for(i=0;i<n;i++)
{
ptr[i]=new database();
ptr[i]->getdata();
}
cout<<"\nname"<<"roll"<<"class"<<"div"<<"dob"<<"bg"<<"city"<<"phone"<<"license"<<endl;
for (i=0;i<n;i++)
display(*ptr[i]);
database::count();

for (i=0;i<n;i++)
{
delete(ptr[i]);
}
cout<<"\nobject is deleted";
return 0;
}