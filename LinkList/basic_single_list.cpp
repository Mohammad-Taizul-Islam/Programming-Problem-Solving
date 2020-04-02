#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;
    one =(node *) malloc(sizeof(node));
    two =(node *) malloc(sizeof(node));
    three =(node *) malloc(sizeof(node));
    one->data=44;
    two->data=55;
    three->data=66;
    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;

    while(head!=NULL)
    {
        cout<<head->data <<" \t";
        head=head->next;
    }



    return 0;
}