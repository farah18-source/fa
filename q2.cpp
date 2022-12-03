#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;
    list.Add(5);
    list.print();
    list.Add(3);
    list.print();
    list.Add(7);
    list.print();
    list.Add(9);
    list.print();
    list.Add(3);
    list.print();
    cout << list.sum() << endl;
    list.Remove(5);
    list.print();
    list.Remove(9);
    list.print();
    list.Remove(3);
    list.print();

}
