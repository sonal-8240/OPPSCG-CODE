#include <iostream>	
#include <algorithm>	

#include <vector>

using namespace std;

class student	
{
public: 
char name[10];   
string DOB;
double teliphone_no; 
string roll_no;


bool operator==(const student& i1)

{
if(roll_no==i1.roll_no) 

return 1;

return 0;
}


bool operator<(const student& i1)
{
if(roll_no<i1.roll_no) 

return 1;

return 0;
}

};
 
vector<student> o1; 
void print(student &i1);
 void display();

void insert(); 
void search();
 void dlt();

bool compare(const student &i1, const student &i2)
{
if (i1.name != i2.name)
 return i1.teliphone_no < i2.teliphone_no; 
 
 return i2.teliphone_no < i1.teliphone_no;
}



int main()
{
int ch; 

do
{
cout<<"\n!!!!!!!!!!!!!!!!! Menu !!!!!!!!!!!";
 cout<<"\n1.Insert"; 
 cout<<"\n2.Display"; 
 cout<<"\n3.Search"; 
 cout<<"\n4.Sort"; 
 cout<<"\n5.Delete"; 
 cout<<"\n6.Exit"; 
 cout<<"\nEnter your choice:";
 cin>>ch;
switch(ch)
{
case 1: insert();
 break;
case 2: display(); break;
case 3: search(); break;
case 4: sort(o1.begin(),o1.end(),compare); 
cout<<"\n\n Sorted on roll_no"; display();
break; 
case 5: dlt();
break; 
case 6: exit(0);
}
 

}while(ch!=7);

return 0;
}



void insert()
{
student i1;
cout<<"\nEnter student Name:"; cin>>i1.name;
cout<<"\nEnter student DOB:"; 
cin>>i1.DOB; 
cout<<"\nEnter student reliphone_no:"; 
cin>>i1.teliphone_no;
cout<<"\nEnter roll_no:"; 
cin>>i1.roll_no; 
o1.push_back(i1);
}

void display()
{
for_each(o1.begin(),o1.end(),print);
}

void print(student &i1)
{
cout<<"\n";
cout<<"\nstudent Name:"<<i1.name; 
cout<<"\nstudent DOB:"<<i1.DOB;
 cout<<"\nstudent teliphone_no:"<<i1.teliphone_no; 
 cout<<"\nroll_no:"<<i1.roll_no;
}




void search()
{
vector<student>::iterator p; 
student i1;
cout<<"\nEnter student roll_no to search:";
 cin>>i1.roll_no; 
 p=find(o1.begin(),o1.end(),i1); 
 if(p==o1.end())
  cout<<"\nNot found.";
else
{
cout<<"\nFound.";
}
}



void dlt()
{
vector<student>::iterator p; student i1;
cout<<"\nEnter the student roll_no to delect:"; 
cin>>i1.roll_no; 
p=find(o1.begin(),o1.end(),i1); 
if(p==o1.end())
cout<<"\nNot found.";
else
{
o1.erase(p); 
cout<<"\nDeleted.";
 }

}


