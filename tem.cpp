#include<iostream>
using namespace std;
template<class T>
class sorting
{
    int n;
    T arr[50];
    public:
    void getdata();
    void selection_sort();
    void display();
};
template<class T>
void sorting<T>::getdata()
{
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the elements";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
template<class T>
void sorting<T>::selection_sort()
{
    int i,j,loc;
    float min,temp;
    
      //  min=arr[i];
    //    loc=i;
        for (j=j+1;j<n;j++)
        {   min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
}
template<class T>
void sorting<T>::display()
{
    cout<<"\n sorted list is:";
    for(int i=0;i<n;i++)
    {
        cout<<"\nelement"<<i+1<<"\n"<<arr[i];
        cout<<endl;
    }
}
int main()
{
    int ch;
    cout<<"1.int \n"<<"2.float\n";
    cout<<"enter your chioce  ";
    cin>>ch;
    switch(ch)
    { 
        case 1:
        sorting<int> o;
        o.getdata();
        o.selection_sort();
        o.display();
        break;
        case 2:
        sorting<float> o1;
        o1.getdata();
        o1.selection_sort();
        o1.display();
        break;

    }
}
