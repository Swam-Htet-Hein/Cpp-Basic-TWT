#include<iostream>
using namespace std;

void test(int * x, int * y) {
    *x = 2;
    *y = 4;
}

int main() {
    int a, b;
    test(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}