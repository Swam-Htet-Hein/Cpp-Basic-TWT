#include<iostream>
#include<tuple>
using namespace std;

int main() {
    int x;
    float y;
    char z;
    tuple <int, float, char> tup = make_tuple(2, 9.5, 'A');
    // tuple ထဲကတန်ဖိုးတွေကို variable တွေမှာညီစေချင်ရင် tie() ကိုသုံးရမယ်။
    tie(x, y, z) = tup;
    // တစ်ခုတော့ရှိတယ် ကိုယ်သုံးထားတဲ့ data types ချင်းကိုက်ညီနေမှ ရမယ်။
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    cout << "z : " << z << endl;
    cout << "tup[0] : " << get<0>(tup) << endl;
    cout << "tup[1] : " << get<1>(tup) << endl;
    cout << "tup[2] : " << get<2>(tup) << endl;

    return 0;
}