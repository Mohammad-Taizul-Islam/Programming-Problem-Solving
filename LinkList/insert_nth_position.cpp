#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *head=NULL;



void insert(int value,int n)
{
    struct Node *temp=new Node();
    temp->data=value;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
    }
    struct Node *temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
void print_list()
{
    while(head!=NULL)
    {
        cout<<head->data<<"...>";
        head=head->next;
    }
}




int main()
{
    int where,value,n;

    cout<<"How many nodes do you wnat to insert in list ?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value and position to insert list ..."<<endl;
        cin>>value;
        cin>>where;
        insert(value,where);
    }
    print_list();
    return 0;
}