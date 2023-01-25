#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* nxt;
    node* prv;
};

class DoublyLinkedList{
public:
    node* head;

    DoublyLinkedList()
    {
        head = NULL;
    }

    node* CreateNewNode(int data)
    {
        node* newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        node* newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->nxt = head;
        head->prv = newnode;
        head = newnode;
    }

    void Traverse()
    {
        node* a = head;
        while(a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
};
int main()
{
    DoublyLinkedList d1;
    d1.InsertAtHead(30);
    d1.InsertAtHead(20);
    d1.InsertAtHead(10);

    d1.Traverse();

    return 0;
}
