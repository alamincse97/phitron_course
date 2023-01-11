#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* nxt;
};

class LinkeList{
    node* head;

    LinkedList()
    {
        head = NULL;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {

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
    LinkedList l;

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
