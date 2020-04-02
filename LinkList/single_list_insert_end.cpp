#include<iostream>
#include<cstdlib>
using namespace std;
struct Node {
    int data;
    struct Node * next;
};
struct Node * head=NULL;
void insert_at_end(int value)
{
    Node *newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    struct Node *temp=head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
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
    insert_at_end(11);
    insert_at_end(22);
    insert_at_end(77);
    print_list();
    return 0;
}