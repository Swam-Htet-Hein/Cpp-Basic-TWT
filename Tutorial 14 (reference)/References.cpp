#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int &b = a; // & is references (အကိုးအကား)
    // b သည် a ရဲ့ အကိုးအကားဖြစ်တဲ့ အတွက် a ပြောင်းရင် b လည်းပြောင်းမယ်။
    a = 6;
    cout << a << endl;
    cout << b << endl;
    // a သည်လည်း b ရဲ့ ကိုးကားခြင်း ခံရတဲ့ အတွက် b ပြောင်းရင် a ပါလိုက်ပြောင်းမယ်။
    b = 4;
    cout << a << endl;
    cout << b << endl;

    return 0;
}