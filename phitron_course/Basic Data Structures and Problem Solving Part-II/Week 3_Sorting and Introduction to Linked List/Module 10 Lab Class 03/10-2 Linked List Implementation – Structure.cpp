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

    LinkedList()
    {
        head = NULL;
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

    }

    //Search for a single value
    void SearchDistinctValue(int value)
    {

    }

    //Search all possible occurrence
    void SearchAllValue(int value)
    {

    }

};

int main()
{
    LinkeList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    l.Traverse();

    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);

    l.SearchAllValue(30);


    return 0;
}
