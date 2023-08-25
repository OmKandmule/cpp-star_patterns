#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
       int j;
       cout<<"enter the any num to print w shape star pattern"<<endl;
       cin>>j;
        
      for(int i=1 ; i<=j ; i++)
    {
     cout<<"#"<<setw((j+1)-i)<<"#"<<setw(i+i)<<"#"<<setw((j+1)-i)<<"#"<<endl;

    }


   return 0;
}