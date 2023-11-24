#include<iostream>
using namespace std;

void printText(string text) {
    cout << text << ' ';
}

void printNTime(int n, string text) {
    for (int i=0; i<n; i++) {
        printText(text);
    }
}

int main() {
    printNTime(3, "Swam");
    printNTime(5, "Yeay");
    return 0;
}