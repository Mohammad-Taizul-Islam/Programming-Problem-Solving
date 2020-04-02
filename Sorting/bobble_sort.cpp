#include<iostream>
using namespace std;
void bubble_sort(int *num,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
}
int main()
{
    cout<<"Bubble sort here !"<<endl;
    int n,value;
    cin>>n;
    int number[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>value;
        number[i]=value;
    }
    bubble_sort(number,n);
    cout<<"After Bubble sort :"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<number[i]<<" \t";
    }
    return 0;
}