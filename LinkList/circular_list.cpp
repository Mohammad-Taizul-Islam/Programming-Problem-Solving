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
    one->data=440;
    two->data=550;
    three->data=660;
    one->next=two;
    two->next=three;
    three->next=one;

    head=one;

    while(head!=three)
    {
        cout<<head->data <<" \t";
        head=head->next;
    }



    return 0;
}