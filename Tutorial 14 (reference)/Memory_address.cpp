#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b = 4;
    // a သည် သူ့ memory address သက်သက်စီ ရှိသည်
    // b သည်လည်း သူ့ memory address သက်သက်စီ ရှိသည်
    cout << &a << endl; // 0xaa6d5ff87c
    cout << &b << endl; // 0xaa6d5ff878
    cout << endl;

    int x = 8;
    int &y = x;
    // yသည် xရဲ့ memory address နဲ့ referencing လုပ်လိုက်တာဖြစ်တဲ့ အတွက် တန်ဖိုးတွေလဲ အတူတူ sharing လုပ်တယ်။
    cout << &x << endl; // 0x5148dffc7c
    cout << &y << endl; // 0x5148dffc7c

    return 0;
}