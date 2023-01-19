#include<bits/stdc++.h>

using namespace std;


//node er structure
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
 // Creates a new node with the given data and returns it
 node* CreateNewNode(int data)
 {
     node* newnode = new node;
     newnode->data = data;
     newnode->nxt = NULL;
     newnode->prv = NULL;
     return newnode;
 }
 //Inserts a node with given data at head
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
     newnode-> nxt = a;
     a->prv = newnode;
     head = newnode;
 }
 // print the linked list
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
};

int main()
{
    DoublyLinkedList d1;

    d1.InsertAtHead(5);
    d1.InsertAtHead(4);
    d1.InsertAtHead(3);
    d1.InsertAtHead(2);
    d1.InsertAtHead(1);

    d1.Traverse();

    d1.InsertAtHead(0);

    d1.Traverse();

    return 0;
}
