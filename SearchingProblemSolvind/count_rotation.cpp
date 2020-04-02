#include<iostream>
using namespace std;
int count_rotation(int *num,int n)
{
    int low=0;
    int high=n-1,mid,next,prev,result=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        next=(mid+1)%n;
        prev=(mid+n-1)%n;
        if(num[low]<=num[high])
        {
            //result =low ;
            return low;
        }if (num[mid]<=num[next] && num[mid] <= num[prev])
        {
            //result=mid;
            return mid;  
        }else if (num[mid]<=num[high])
        {
             high=mid-1;
        }else if( num[mid]>=num[low]) {
            low=mid+1;
        }
    }
    return result;
}
int main(int argc, const char** argv) {
     cout<<"Count rotation of array !!!!"<<endl;
     int n,value;
     cin>>n;
     int num[n+1];
     for(int i=0;i<n;i++)
     {
         cin>>value;
         *(num+i)=value;
     }
     int count=count_rotation(num,n);
     cout<<"No. of Rotation of The list is "<<count<<endl;
    return 0;
}