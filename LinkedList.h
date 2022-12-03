

#ifndef linkedlist_h
#define linkedlist_h

#include <vector>
#include <iostream>
using namespace std;

struct node {
    int data;
    int occ;
    node* next;
    
    node(int d)
    {
        data = d;
       occ = 1;
        next = nullptr;
    };
};
class LinkedList
{
private:
    node* head;
public:
    LinkedList();
    ~LinkedList();
    void Add(int item);
    void Remove(int item);
    void print();
    int sum();
    //LinkedList create(vector<int> items);


};


LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    node* temp;
    while (head != nullptr)
    {
        temp = head->next;
        delete head;
        head = temp;
    }
}


void LinkedList::Add(int item)
{
   
    if (head == nullptr)
    {
        head = new node(item);
        
    }
    else {
        node* parent = head;
        while (parent->next != nullptr)
        {
            if (parent->data == item)
            {
              parent->occ++;
                return;
            }
            parent = parent->next;
        }
        node* temp = new node(item);
        
        parent->next = temp;
    }
}
void LinkedList::Remove(int item)
    
    
{
    
    if (head == nullptr)
        cout << "list is empty";
    else if (head->data == item)
    {
        node* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        node* parent = head;
        node* child = parent->next;
        while (child->data != item)
        {
            if (child->next == nullptr)
            {
                cout << "item not found" << endl;
                return;
            }
            parent = child;
            child = child->next;
        }
        parent->next = child->next;
        delete child;
    }

}
void LinkedList::print()
{
    node* temp = head;
    while (temp != nullptr)
    {
        cout << "(" <<temp->data<<","<<temp->occ<<")";
        temp = temp->next;
    }
    cout << "empty" << endl;
}
int LinkedList::sum()
{
    node* temp = head;
    int sum = 0;
    while (temp != nullptr)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}
//LinkedList LinkedList::create(vector<int> items)


#endif /* linkedlist_h */
