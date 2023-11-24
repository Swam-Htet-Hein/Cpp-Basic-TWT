#include<iostream>
#include<map>
using namespace std;

int main() {
    // array, tuple သည် value(elements) တွေကို index နဲ့ ပြန်ခေါ်ပြီးသုံးရတယ်။
    // map ကတော့ key နဲ့ ခေါ်သုံးရပြီး key သည် ကြိုက်တာပေးလို့ရသည်။
    map <char, int> mp = {
        {'a', 1},
        {'b', 2},
        {'c', 3}
    };

    cout << mp['a'] << endl;
    cout << mp['b'] << endl;
    cout << mp['c'] << endl;
    // အကယ်၍ key ထဲမှာ တန်ဖိုးမရှိဘူးဆိုရင် default အနေနဲ့ သုံညပြန်ထုတ်ပေးတယ်။
    cout << mp['d'] << endl;

    return 0;
}