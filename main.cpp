#include <iostream>
#include <map>
#include <vector>
#include <tuple>
#include <string>

using namespace std;
// g++ -o run main.cpp
// g++ -std=c++11 -o run main.cpp
// ^ Fixes initializer list error
int main()
{
    // int n, x;
    // // cout << "Hello world!" << endl;

    // Arrays
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    arr[0] = 50;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        // cout << arr[i] << endl;
    }
    x = 1;
    int add;
    while (x < 10)
    {
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "X is: " << x << endl;
    }
    // Tuples
    tuple<char, int, char, int, char, int, char, int> symbol_count('A', 2, 'B', 4, 'C', 6, 'D', 8);
    cout << get<1>(symbol_count) << endl;
    cout << get<3>(symbol_count) << endl;

    // maps
    map<char, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4}};
    pair<char, int> p1('j', 5);
    mp.insert(p1);
    // cout << mp['j'];
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        // cout << "Hi" << endl;
    }

    // vectors
    vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(9);
    v1.push_back(9);
    v1.pop_back();
    // cout << v1.capacity() << endl;
    // cout << v1.size() << endl;
    for (int i = 0; i < v1.size(); ++i)
    {
        // cout << v1[i] << endl;
    }

    return 0;
}