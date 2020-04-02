#include<iostream>
using namespace std;
void insertion_sort(int *num,int n)
{
    int key,step;
    for(step=1;step<n;step++)
    {
        key=num[step];
        int j=step-1;
        while(j>=0 && key<num[j])
        {
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=key;
    }
}
int main()
{
     cout<<"Insetion Sorting Here !!"<<endl;
    int n,value;
    cin>>n;
    int number[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>value;
        number[i]=value;
    }
    insertion_sort(number,n);
    cout<<"After insertion  sorting the list"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<number[i]<<" \t";
    }
    return 0;
}