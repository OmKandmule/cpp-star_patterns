#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
       int j;
       cout<<"enter the any num to print M shape star pattern"<<endl;
       cin>>j;
        
      for(int i=1 ; i<=j ; i++)
    {
     cout<<"#"<<setw(i)<<"#"<<setw(j+j-i-i)<<"#"<<setw(i)<<"#"<<endl;

    }


   return 0;
}