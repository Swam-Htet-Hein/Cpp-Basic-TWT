#include<iostream>
using namespace std;
// func(parameters)
int doMath(int x, int y, int z = 1) {
    return (x + y) * z;
}

int main() {
    cout << doMath(2, 3); // arguments
    return 0;
}