#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j;
       cout<<"enter the any number to print s shape star pattern";
       cin>>j;

     for( i=1;i<=j;i++)
     {

        cout<<"#";
     }
      for( i=1;i<=j;i++)
    {
        cout<<"#"<<endl;
    }
      for ( i=1;i<=j;i++)
      {
        cout<<"#";
      }
     for( i=1;i<=j;i++)
     {
        cout<<setw(j)<<"#"<<endl;
     }
     for( i=1;i<=j;i++)
     {
        cout<<"#";
     }
    return 0;
}