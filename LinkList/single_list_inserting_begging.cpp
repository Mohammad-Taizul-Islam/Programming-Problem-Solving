#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

/*
void  insert_list_begging(int value,Node**  head)
{
    Node *temp=new Node();
    temp->data=value;
    temp->next=NULL;
    if( *head!=NULL)
    temp->next=*head;
    *head=temp;
}*/

void insert_list_ending(int value)
{
    Node *temp1=new Node();
    Node *temp;
    temp1->data=value;
    temp1->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp1;
    
    head=temp;
}
void print_list()
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<">"<<temp->data<<"\t";
        temp=temp->next;
    }
}
int main()
{
    cout<<"How many elenets do you want to add in the list "<<endl;
    int n,value;
    cin>>n;
    cout<<"Enter elements for Linklist"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        //insert_list_begging(value,&head);
        insert_list_ending(value);
        print_list();
    }
    
    

    return 0;
}