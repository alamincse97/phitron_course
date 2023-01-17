/*
1. Linked List
2. 100 insert after 10
*/

#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* nxt;
};

class LinkeList{
public:
    node* head;
    int sz=0;

    LinkeList()
    {
        head = NULL;
        sz=0;
    }

    //Creates a new node with data = value and nxt = NULL

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
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

    //Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while (a!= NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a -> nxt;
            index++;
        }
        return -1;
    }

    //Search all possible occurrence
    int SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a -> data == value)
            {
                cout << value << " is found at index " << index << "\n";
            }
            a = a->nxt;
            index++;
        }
    }

    // Linked list Length
    int getSize()
    {
        //O(1)
        return sz;

        //O(size of linked list) = O(n)
//        int sz = 0;
//        node* a = head;
//        while(a != NULL)
//        {
//            sz++;
//            a = a->nxt;
//        }
//        return sz;
    }

    void InsertAtAnyIndex(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            return;
        }
        if(index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node* a = head;
        int cur_index = 0;
        while(cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node* newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node* a = head;
        head = a->nxt;
        delete a;
    }

    void DeleteAnyIndex(int index)
    {
        if(index < 0 || index > sz-1)
        {
            return;
        }
        if(index == 0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node* a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node* b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }

    void InsertAfterValue(int value, int data)
    {
        node* a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if(a == NULL)
        {
            cout << value << " doesn't exist in linked-list.\n";
            return;
        }
        sz++;
        node* newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;

    }

};

int main()
{
    LinkeList l;

    l.InsertAtHead(30);
    l.InsertAtHead(10);
    l.InsertAtHead(5);

    l.Traverse();

    l.InsertAfterValue(10, 100);

    l.Traverse();

    cout << l.getSize() << "\n";

    return 0;
}





