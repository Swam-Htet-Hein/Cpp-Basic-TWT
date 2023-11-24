#include<iostream>
using namespace std;

int input() {
    int input;
    cin >> input;
    if (cin.fail() == 1) {
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    } else {
        return input;
    }
}

int main(){
    int x, y;
    cout << "Enter x : " << endl;
    x = input();
    cout << "Enter y : " << endl;
    y = input();

    int result = x + y;
    cout << result << endl;    
    system("pause");
    return 0;
}