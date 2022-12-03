#include <iostream>
#include <vector>
using namespace std;

void insertAfter(vector<int>& numbers,int firstValue, int secondValue)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers.at(i) == firstValue)
            numbers.insert(numbers.begin() + i+1, secondValue);
    }

}



int main()
{
    vector<int> numbers;
    int n,m;
    int v1, v2;

    cout << "enter the integer of numbers:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        numbers.push_back(m);

    }

    cout << "enter the value you want to insert after:";
        cin >> v1 ;
    cout << "enter the new value:";
        cin >>  v2;

    
  
    
    
    insertAfter(numbers, v1, v2);
    
    
    for (int i = 0; i < numbers.size(); i++)
        cout << numbers.at(i) << endl;




    return 0;
}

