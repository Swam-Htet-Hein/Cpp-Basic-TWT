#include<iostream>
using namespace std;

int main(){
    // continue သည် looping ထဲမှာမှ ဘယ်loop ကို ‌ကျော် ပြီး ဘယ်ဟာကို ပြမယ်ဆိုတာ ဖြစ်တယ်။
    for (int i=0; i<10; i++) {
        if (i == 8 || i ==4) {
            continue;
        }
        cout << i << ' ';
    }

    return 0;
}