#include <iostream>
#include <stdlib.h>

using namespace std;
struct node
{
    int data;
    struct node *next;
};

void printelement(struct node *ptr)
{
    while( ptr != NULL)
    {
       cout<<"Element is : " <<ptr->data <<endl;
       ptr = ptr -> next;

    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    // list terminate at the fourth element
    fourth->data = 13;
    fourth->next = NULL;

    printelement(head);
    return 0;
}
