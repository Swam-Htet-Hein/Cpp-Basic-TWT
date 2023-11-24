#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Swam Htet";
    cout << name.length() << endl;
    for (int i=0; i<name.length(); i++) {
        if (i == 3) {
            name[i] = 'M';
        }
        cout << name[i] << ' ';
    }

    return 0;
}