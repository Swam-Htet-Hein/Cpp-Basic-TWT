#include<iostream>
using namespace std;

int main(){
    int num[] {1,2,3,4,5};
    float num2[] {1.2, 3.6, -0.9, 4.55, 1.0};
    string name[] {"Swam", "Htet", "Hein"};
    char alph[] {'a', 'b', 'c'};
    bool check[] {true, false, false};

    cout << sizeof(num) << endl;
    cout << sizeof(num[0]) << endl;
    cout << sizeof(num)/sizeof(num[0]) << endl;
    //cout << sizeof(num)/sizeof(int) << endl; because int has 4 bytes
    return 0;
}