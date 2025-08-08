#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class linkedlist
{
public:
    node *head;
    linkedlist()
    {
        head = nullptr;
    }
    void traverse()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    linkedlist mylist;
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(5);
    node *fifth = new node(6);

    mylist.head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "linked list element :";
    mylist.traverse();
    return 0;
}
