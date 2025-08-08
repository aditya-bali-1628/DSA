#include<iostream>
using namespace std;

class node 
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }

    void insertvaltail(node* &head, int val)
    {
        node* n = new node(val);
         while(head -> next !=  NULL)
         {  
            
         }
    }

};