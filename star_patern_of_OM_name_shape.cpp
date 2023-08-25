#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
       int j;
       cout<<"enter the any num to print OM name star pattern"<<endl;
       cin>>j;        
        
      for(int i=1 ; i<=j ; i++)
    {
     cout<<" #";

    }
      for(int i=1 ; i<=j ; i++)
    {
     cout<<"#"<<setw((j*2)-1)<<"#"<<endl;

    }
    for(int i=1 ; i<=j ; i++)
    {
     cout<<" #";

    }
    
    cout<<""<<endl;
    cout<<""<<endl;

    for(int i=1 ; i<=j ; i++)
    {
        cout<<"#"<<setw(i)<<"#"<<setw(j+j-i-i)<<"#"<<setw(i)<<"#"<<endl;
    }

   return 0;
}