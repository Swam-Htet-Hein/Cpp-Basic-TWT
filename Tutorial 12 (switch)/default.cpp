#include <iostream>
using namespace std;

int main(){
    int x = 1;
    switch (x+6) {
        case 1:
            cout << "This is one";
            break;
        case 2:
            cout << "This is two";
            break;
        case 3:
            cout << "This is three";
            break;
        default:
            cout << "Default";
            break;
    }
    return 0;
}