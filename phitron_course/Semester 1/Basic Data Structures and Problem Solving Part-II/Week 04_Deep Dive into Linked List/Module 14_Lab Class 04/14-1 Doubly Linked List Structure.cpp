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
};


int main()
{
    return 0;
}
