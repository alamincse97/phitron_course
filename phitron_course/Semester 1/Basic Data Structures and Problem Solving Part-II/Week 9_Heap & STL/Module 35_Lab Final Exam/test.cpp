#include <iostream>

using namespace std;

// Node class representing a node in the doubly linked-list
class Node
{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

// Doubly linked-list class
class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }

    // Inserts a node at the beginning of the list
    void insertHead(int value)
    {
        Node* newNode = new Node(value);
        if (this->size == 0)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else
        {
            newNode->next = this->head;
            this->head->prev = newNode;
            this->head = newNode;
        }
        this->size++;
    }

    // Inserts a node at the end of the list
    void insertTail(int value)
    {
        Node* newNode = new Node(value);
        if (this->size == 0)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else
        {
            newNode->prev = this->tail;
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }

    // Inserts a node at the middle of the list
    void insertMid(int value)
    {
        Node* newNode = new Node(value);
        if (this->size == 0)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else if (this->size == 1)
        {
            this->head->next = newNode;
            newNode->prev = this->head;
            this->tail = newNode;
        }
        else
        {
            Node* slow = this->head;
            Node* fast = this->head;
            while (fast != nullptr && fast->next != nullptr)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            Node* prevNode = slow->prev;
            if (fast == nullptr)
            {
                // Even number of nodes
                prevNode->next = newNode;
                newNode->prev = prevNode;
                newNode->next = slow;
                slow->prev = newNode;
            }
            else
            {
                // Odd number of nodes
                Node* nextNode = slow->next;
                slow->next = newNode;
                newNode->prev = slow;
                newNode->next = nextNode;
                nextNode->prev = newNode;
            }
        }
        this->size++;
    }

    // Prints the linked-list
    void printList()
    {
        Node* curr = this->head;
        while (curr != nullptr)
        {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

// Sample usage
int main()
{
    DoublyLinkedList dll;
    dll.insertHead(2);
    dll.insertHead(1);
    dll.insertTail(4);
    dll.insertTail(5);
    dll.insertMid(3);
    dll.printList();  // Output: 1 2 3 4 5
    return 0;
}

