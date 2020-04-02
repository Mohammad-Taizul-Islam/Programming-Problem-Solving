#include<iostream>
using namespace std;
int find_item(int *num,int n,int x)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x==num[mid])
        return mid;
        if(num[mid]<=num[high])
        {
            if(x>num[mid] && x<=num[high])
            {
                low=mid+1;
            }else
            {
                high=mid-1;
            }
            
        }else if(num[mid]>=num[low])
        {
            if(x>=num[low]&& x<num[mid])
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }
            
        }
    }
    return -1;

}
int main()
{
    int n,value,item;
    cin>>n;
    int num[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>value;
        num[i]=value;
    }
    cin>>item;
    int index=find_item(num,n,item);
    if(index>0)
    {
        cout<<item<<"Found in index : "<<index+1 <<endl;
    }else
    {
        cout<<item<<"was not found in the list"<<endl;
    }
    
    return 0;
}