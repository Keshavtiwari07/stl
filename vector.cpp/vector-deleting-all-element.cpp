#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec2;

   vec2.emplace_back(1); // inserting values
   vec2.emplace_back(2);
   vec2.emplace_back(5);
   vec2.emplace_back(10);
   vec2.emplace_back(12);
   vec2.emplace_back(6);
   vec2.emplace_back(7);

   vec2.pop_back(); // delete a single last element

    for (auto it :vec2)
    {
        cout << it << " ";

    } // prints value 1 2 5 10 12 6
    cout << endl;

    // size
    cout <<vec2.size();// prints 6
    cout << endl;

    cout << endl;

    // deleting all element of vector
   vec2.clear();
    cout <<vec2.size();
    cout << endl;

    return 0;
}