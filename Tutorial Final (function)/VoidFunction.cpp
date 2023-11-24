#include<iostream>
using namespace std;

// void function does not return values
void test() {
    for (int i=0; i<5; i++) {
        cout << i << ' ';
    }
}
void greet() {
    cout << "Hello!" << endl;
}

int main() {
    test();
    test();
    test();
    greet();

    return 0;
}