#include<iostream>
#include<tuple>
using namespace std;

int main() {
    tuple <int, float, string, char, bool> things;
    get<0>(things) = 21;
    get<1>(things) = 99.95;
    get<2>(things) = "Pizza";
    get<3>(things) = 'A';
    get<4>(things) = true;
    cout << get<0>(things) << endl;
    cout << get<1>(things) << endl;
    cout << get<2>(things) << endl;
    cout << get<3>(things) << endl;
    cout << get<4>(things) << endl;
    cout << endl;
    // instead of writing each things
    things = make_tuple(80, 6.5, "Orange", 'J', false);
    cout << get<0>(things) << endl;
    cout << get<1>(things) << endl;
    cout << get<2>(things) << endl;
    cout << get<3>(things) << endl;
    cout << get<4>(things) << endl;

    return 0;
}