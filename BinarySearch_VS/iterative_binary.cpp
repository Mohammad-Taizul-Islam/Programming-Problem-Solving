#include<iostream>
using namespace std;
int iterative_binary_search(int *num,int n,int item)
{
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(item==num[mid])
        return mid;
        else if (item<num[mid])
        {
            high=mid-1;
        }else
        {
            low=mid+1;
        }
        
    }
    return -1;
    
}
int main()
{
    cout<<"How many Elements :"<<endl;
    int n,value,item;
    cin>>n;
    int num[n+1];
    cout<<"Enter the Elements for list :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        num[i]=value;
    }
    cout<<"Enter item elements for search"<<endl;
    cin>>item;
    int index=iterative_binary_search(num,n,item);
    if(index>0)
    {
        cout<<item<<"Is on the index :"<<index<<endl;
    }else
    {
        cout<<item<<"doesn't present in the lis"<<endl;
    }
    
    return 0;
}