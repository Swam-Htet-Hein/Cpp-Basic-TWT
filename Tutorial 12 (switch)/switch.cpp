#include <iostream>
using namespace std;

int main(){
    int x = 1;
    switch (x+2) {
        case 1:
            cout << "This is one";
            break;
        case 2:
            cout << "This is two";
            break;
        case 3:
            cout << "This is three";
            break;
    }
    return 0;
}