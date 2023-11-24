#include<iostream>
using namespace std;

int main(){
    // break သည် looping ကြီးတစ်ခုလုံးကို ရပ်ပြီး escape လုပ်လိုက်ခြင်းဖြစ်သည်။
    int input;
    while (true) {
        cout << "Enter 1 or 2 : ";
        cin >> input;
        if (input == 1 || input == 2) {
            break;
        }
    }

    return 0;
}