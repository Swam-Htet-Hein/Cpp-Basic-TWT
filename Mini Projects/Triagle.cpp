#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=50; i++) {
        for (int j=0; j<i; j++) {
            cout << '\xdb';
        }
        cout << endl;
    }
    return 0;
}