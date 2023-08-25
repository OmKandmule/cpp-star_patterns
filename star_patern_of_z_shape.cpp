#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int j;
    cout<<"enter the any number to  print z shape star pattern"<<endl;
    cin>>j;
     
    
    for(int i=1;i<=j;i++)
    {
        cout<<"#";
    }

    for(int i=1;i<=j;i++)
    {
        cout<<"#"<<setw((j+1)-i)<<endl;
    }

    for(int i=1;i<=j;i++)
    {
        cout<<"#";
    }

}