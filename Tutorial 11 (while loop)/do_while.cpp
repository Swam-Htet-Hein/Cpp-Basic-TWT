#include<iostream>
using namespace std;

int main(){
    // do while loop သည် အနည်းဆုံး တစ်ကြိမ် ပတ်သည်။
    int x = 10;
    do {
        int add;
        cout << "Enter add : ";
        cin >> add;
        x += add;
        cout << "x is : " << x << endl;
    } while (x < 10);
    return 0;
}