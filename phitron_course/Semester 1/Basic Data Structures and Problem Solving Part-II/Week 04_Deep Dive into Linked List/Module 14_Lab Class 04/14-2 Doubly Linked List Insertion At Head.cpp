/*
    Doubly Linked List:-
    1. Structure
    2. Insertion
    3. Deletion
    4. Reverse
*/
#include<bits/stdc++.h>

using namespace std;

// node er structure
class node{
public:
    int data;
    node* nxt;
    node* prv;
};

class DoublyLinkedList{
public:
    node* head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    //Creates a new node with the given data and returns it
    node* CreateNewNode(int data)
    {
        node* newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    //Inserts a node with given data at head
    //time complexity:- O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node* newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node* a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    //Print the linked list
    void Traverse()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    int getSize()
    {
        return sz;
    }
};


int main()
{
    DoublyLinkedList d1;
    d1.InsertAtHead(10);
    d1.InsertAtHead(5);
    d1.InsertAtHead(1);

    d1.Traverse();
    cout << d1.getSize() << "\n";
    return 0;
}

