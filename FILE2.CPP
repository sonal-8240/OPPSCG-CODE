#include<iostream.h>
#include<fstream.h>
//using namespace std;
class file
{private:

 public:
 char name[10];
 float roll_no;
  void accept()
  { cout<<"enter the student name:"<<endl;
     cin>>name;
     cout<<"enter the student roll_no:"<<endl;
     cin>>roll_no;

 }
  void display()
  { cout<<"student name is:"<<name<<endl;
  cout<<"student roll_no is:"<<roll_no<<endl;
  }
  };

  int main()
  {
  file o[10];
   fstream f;
  int i,n;
  f.open("p.txt",ios::out);
  cout<<"how many records you want:";
  cin>>n;
  for(i=0;i<n;i++)
  { o[i].accept();
  f.write((char*)&o[i],sizeof(o[i]));
  }
  f.close();
  f.open("p.txt",ios::in);
  for(i=0;i<n;i++)
  { f.read((char*)&o[i],sizeof(o[i]));
  o[i].display();
  }
  f.close();

 }


