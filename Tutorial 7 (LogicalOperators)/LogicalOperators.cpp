#include<iostream>
using namespace std;
/*
    ! --> not
    && --> and
    || --> or
*/
int main(){
    bool x = !false;
    cout << x << endl;
    bool y = true && false;
    cout << y << endl;
    bool z = true || false;
    cout << z << endl;

    return 0;
}