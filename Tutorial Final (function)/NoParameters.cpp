#include<iostream>
using namespace std;

int getNumber() {
    return 8;
}
char getAlpha() {
    return 'a';
}
string getText() {
    return "Hello";
}
bool getTrue() {
    return true;
}

int main() {
    cout << getNumber() << endl;
    cout << getAlpha() << endl;
    cout << getText() << endl;
    cout << getTrue() << endl;
    return 0;
}