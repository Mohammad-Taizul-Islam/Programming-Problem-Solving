#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head ,*one=NULL,*two=NULL,*three=NULL;
    one=(node *)malloc(sizeof(node ));
    two=(node *)malloc(sizeof(node ));
    three=(node *)malloc(sizeof(node ));

    one->data=120;
    one->next=two;
    one->prev=NULL;
    two->prev=one;
    two->data=220;
    two->next=three;
    three->prev=two;
    three->data=420;
    three->next=NULL;

    head=one;

    while(head != NULL)
    {
        cout<< "..........>>>>"<< head->data << " \t ";
        head=head->next;
    }


    return 0;
}