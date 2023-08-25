#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
     int k;

    cout<<"enter the any number to print k shape"<<endl;
    cin>>k;

    for(int i=1 ; i<=k ; i++)
    {
      cout<<"#"<<setw(k-i)<<"#"<<endl;

    } 
    for(int i=1 ; i<=k ; i++)
    {
      cout<<"#"<<setw(i)<<"#"<<endl;

    } 


    return 0;
}