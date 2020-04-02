#include<iostream>
using namespace std;
int recursive_binary_search(int *num,int x,int low,int high)
{
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(x==num[mid])
    return mid;
    else if (x<num[mid])
    {
       return recursive_binary_search(num,x,low,mid-1);
    }else
    {
        return recursive_binary_search(num,x,mid+1,high);
    }
    
}
int main()
{
    int n,val,item;
    cout<<"How many Number do you want to The List"<<endl;
    cin>>n;
    int num[n+1];
    for(int i=0;i<n;i++)
    {
       cin>>val;
        num[i]=val;
    }
    cin>>item;
    int index=recursive_binary_search(num,item,0,n-1);
    if(index>0)
    {
        cout<<item<<"Is :" <<index << "of the list "<<endl;
    }else
    {
        cout<<item<<"doesn't present in the list"<<endl;
    }
    
    return 0;
}