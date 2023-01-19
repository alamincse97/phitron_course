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
    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout << index << " doesn't exist.\n";
            return;
        }
        node* a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node* b = a->prv;
        node* c = a->nxt;
        if(b != NULL)
        {
            b->nxt = c;
        }
        if(c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index == 0)
        {
            head = c;
        }
        sz--;
    }
    //Prints the linked list O(n)
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

    d1.Delete(4);

    d1.Traverse();

    return 0;
}
