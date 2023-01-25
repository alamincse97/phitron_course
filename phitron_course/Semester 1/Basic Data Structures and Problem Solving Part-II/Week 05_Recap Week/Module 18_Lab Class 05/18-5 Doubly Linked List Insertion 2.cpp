//13:47

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

    void Insert(int index, int data)
    {
        if(index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node*a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            if(a == NULL)
            {
                break;
            }
            a = a->nxt;
            cur_index++;
        }
        if(a == NULL)
        {
            cout << "Can't insert\n";
            return;
        }

        node* newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        node* b = a->nxt;
        if(b != NULL)
        {
            b->prv = newnode;
        }
        a->nxt = newnode;
        newnode->prv = a;
    }
};
int main()
{
    DoublyLinkedList d1;
    d1.InsertAtHead(30);
    d1.InsertAtHead(20);
    d1.InsertAtHead(10);

    d1.Traverse();

    d1.Insert(2, 40);
    d1.Traverse();

    d1.Insert(4, 100);
    d1.Traverse();

    d1.Insert(6, 100);

    return 0;
}

