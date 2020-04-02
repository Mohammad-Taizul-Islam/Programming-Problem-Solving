#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"Enter the number to check prome or not"<<endl;
    int number;
    bool flag;
    cin>>number;

    for(int i=2;i<=sqrt(number);i++)
    {
        if(number%i==0)
        {
            flag=false;
        }else{
            flag=true;
        }
    }

    if(!flag)
    {
        cout<<number<<" is not a prime number"<<endl;
    }else{
          cout<<number<<" is a prime number"<<endl;
    }
    return 0;
}
