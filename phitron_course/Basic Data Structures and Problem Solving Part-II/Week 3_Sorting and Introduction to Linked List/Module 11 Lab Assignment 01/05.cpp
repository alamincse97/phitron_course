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
        return -1;
    }
    //Linked List Length
    int getSize()
    {
        return sz;
    }

    //get value

    int getValue(int index)
    {
        node* a = head;
        int count = 0;
        while(a != NULL && count < index)
        {
            a = a->nxt;
            count++;
        }
        if(a == NULL)
        {
            return -1;
        }
        return a->data;
    }

    //print reverse

    void PrintReverse2(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        PrintReverse2(a->nxt);
        cout << a->data << " ";
    }
    void PrintReverse()
    {
        PrintReverse2(head);
        cout << "\n";
    }

    // swap

    void swapFirst()
    {
        if(head == NULL || head->nxt == NULL)
        {
            return;
        }
        node* first = head;
        node* second = head->nxt;
        first->nxt = second->nxt;
        second->nxt = first;
        head = second;
    }

};

int main()
{
    LinkeList l;

    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";

    l.PrintReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.PrintReverse();

    return 0;
}
