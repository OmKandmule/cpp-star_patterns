#include<iostream>
using namespace std;

int main()
{
 int k;
 cout<<"enter the any number to print stars"<<endl;
   cin>>k;
    
    for(int i=1 ; i<=k ; i++ )
    {
        for(int j=i ; j<=k ; j++)
        {
           cout<<"#";
        }
        cout<<"\n";
    }

   return 0;
}