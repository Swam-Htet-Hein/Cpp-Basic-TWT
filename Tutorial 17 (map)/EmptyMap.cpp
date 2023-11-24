#include<iostream>
#include<map>
using namespace std;

int main() {
    map <char, int> mp1{

    };
    cout << "Is it mp1 empty?\nif empty 1, or else 0 : " << mp1.empty() << endl;
    cout << "How many elements are there in mp1 : " << mp1.size() << endl;
    cout << endl;
    map <char, int> mp2{
        {'a', 1},
        {'b', 2},
        {'c', 3}
    };
    cout << "Is it mp2 empty?\nif empty 1, or else 0 : " << mp2.empty() << endl;
    cout << "How many elements are there in mp2 : " << mp2.size() << endl;

    return 0;
}