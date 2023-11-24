#include<iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    // Main function calls the add function and return value of 2 + 3
    int result = add(2, 3);
    cout << result << endl;
    return 0;
}