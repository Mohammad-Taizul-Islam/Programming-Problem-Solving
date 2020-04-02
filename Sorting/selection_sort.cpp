#include<iostream>
using namespace std;
int _min(int *num,int low,int high)
{
    int min=low;
    while(low<high)
    {
        if(num[low]<num[min])
            min=low;
            low++;
    }
    return min;
}
void selection_sort(int *num,int n)
{
   int loc=0,temp=0;
   for(int i=0;i<n;i++)
   {
       loc=_min(num,i,n);
       temp=num[loc];
       num[loc]=num[i];
       num[i]=temp;
   }
}
int main()
{
    cout<<"Sorting Here !!"<<endl;
    int n,value;
    cin>>n;
    int number[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>value;
        number[i]=value;
    }
    selection_sort(number,n);
    cout<<"After selection sorting the list"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<number[i]<<" \t";
    }
    return 0;
}