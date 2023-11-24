#include<iostream>
using namespace std;

int main(){
    cout << "int " << sizeof(int) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "string " << sizeof(string) << endl;
    cout << "char " << sizeof(char) << endl;
    cout << "bool " << sizeof(bool) << endl;
    /*
        int 4
        float 4
        double 8
        string 32
        char 1
        bool 1
    */
    return 0;
}