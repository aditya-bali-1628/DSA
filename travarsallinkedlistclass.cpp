#include <iostream>
#include <stdlib.h>

using namespace std;

class node
{
public:
    int data;
    node *ptr;

    void printelement(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << "Element is " << ptr->data << endl;
            ptr = ptr->ptr;
        }
    }
};

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->ptr = second;

    second->data = 10;
    second->ptr = third;

    third->data = 10;
    third->ptr = fourth;

    fourth->data = 10;
    fourth->ptr = NULL;

    printelement(head);
    return 0;
}
