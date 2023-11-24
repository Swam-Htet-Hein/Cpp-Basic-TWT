#include<iostream>
using namespace std;

// int &x = a; change 'x', 'a' will change
// int &y = b; change 'y', 'b' will change

void swap(int &x, int &y) {
    int temp_x = x;
    x = y;
    y = temp_x;
}

int main() {
    int a = 2;
    int b = 3;
    cout << a << endl;
    cout << b << endl;
    cout << "Swapping" << endl;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}