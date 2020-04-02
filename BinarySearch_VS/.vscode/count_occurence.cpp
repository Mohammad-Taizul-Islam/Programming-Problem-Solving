#include<iostream>
using namespace std;
int count_occurence(int *num,int x,bool firstSearch)
{
    int low=0;
    int high=sizeof(num[0])-1;
    int result=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==num[mid]){
          result=mid;
          if (firstSearch)
          {
             high=mid-1;
          }else
          {
              low=mid+1;
          }
          
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
    int n,value,item;
    cin>>n;
    int num[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>value;
        num[i]=value;

    }
    cin>>item;

    int firstIndex=count_occurence(num,item,true);
    if(firstIndex>-1)
    {
        int lastIndex=count_occurence(num,item,false);
        if(lastIndex>0)
        {
            cout<<"Occurence of The item is :"<<lastIndex-firstIndex+1<<endl;
        }
    }
    

    return 0;
}