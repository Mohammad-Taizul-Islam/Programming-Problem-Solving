#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*head;

void insert_at_last(int data)
{
    struct Node *newNode=new Node(),*temp;
    newNode->data=data;
    newNode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        temp->next=newNode;
    }
    head=temp;
}
void insert_at_first(int data)
{
    struct Node *tmp=new Node();
    tmp->data=data;
    tmp->next=head;
    head=tmp;
}
void create_list(int data)
{
    struct Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    head=temp;
}
void traverse_list()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        cout<<"-->"<<temp->data<<" " ;
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int n,data;
    int c;
       cout<<"This is the LinkList App "<<endl;
             cin>>c;
    do{
       
        switch (c)
        {
            case 1: 
            cout<<"Create & insert first Node of LiskList "<<endl;
            cout<<"Enter the data for Node creation "<<endl;
                cin>>data;
            create_list(data);
            break;
            case 2: 
            cout<<"Insert at The Begining ....Node "<<endl;
            cin>>data;
            insert_at_first(data);
            traverse_list();
            break;
            case 3:
            cout<<"Insert At Last Node "<<endl;
            cin>>data;
            insert_at_last(data);
             traverse_list();
             break;
             case 4: /* constant-expression */
             traverse_list();
            /* code */
             break;
        
        default:
            break;
        }
         cin>>c;

    }while(c!=0);
    cin>>n;
    return 0;
}