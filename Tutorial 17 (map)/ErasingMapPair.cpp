#include<iostream>
#include<map>
using namespace std;

int main() {
    map <char, int> mp{
        {'a', 1},
    };
    cout << mp['a'] << endl;
    // map_name.erase(key);
    mp.erase('a');
    cout << mp['a'] << endl;

    // map_name.erase(pair.first(key));
    pair<char, int> pr;
    pr = make_pair('b', 2);
    mp.insert(pr);
    //mp[pr.first] = pr.second;

    cout << mp['b'] << endl;
    mp.erase(pr.first);
    cout << mp['b'] << endl;

    // Clear all keys and values in map
    mp.clear();
    cout << mp['a'] << endl;
    cout << mp['b'] << endl;
    
    return 0;
}