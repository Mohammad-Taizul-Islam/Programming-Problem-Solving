#include<iostream>
#define MAX 100
using namespace std;

int main()
{

    int n,num[MAX];
    bool flag=true;
    cout<<"Enter the numbers of Array index :"<<endl;
    cin>>n;
    cout<<"Enter the numbers for Array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>num[i];
    }

    cout<<"Enter the number to search"<<endl;
    int item;
    cin>>item;
    for(int i=0;i<n;i++)
    {
        if(num[i]==item)
        cout<<"Item got in :"<<i<<" Index" <<endl;
        else
        flag=false;
    }

    if(!flag)
    {
        cout<<"Item is not in list"<<endl;
    }

    return 0;
}
