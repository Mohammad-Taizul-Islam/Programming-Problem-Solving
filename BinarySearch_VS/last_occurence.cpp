#include<iostream>
using namespace std;
int search_last_occurence(int *num,int x)
{
    int low=0;
    int high=sizeof(num[0])-1;
    int result=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==num[mid]){
          result=mid;
          low=mid+1;
        }
      
        else if (x<num[mid])
        {
            high=mid-1;
        }else 
        {
            low=mid+1;
        }
    }
    return result;

}
int main()
{
    cout<<"Last Occurence of a  duplicate number :"<<endl;
    int n,value,item;
    cin>>n;
    int num[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>value;
        num[i]=value;
    }

    cin>>item;
    int index=search_last_occurence(num,item);
    if(index>0)
    {
        cout<<item<<"Is last  appear on index :"<<index <<endl;
    }else
    {
        cout<<item<<"doesn't present in the list "<<endl;
    }
    
    return 0;
}