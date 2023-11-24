#include<iostream>
#include<tuple>
using namespace std;

int main() {
    tuple <int, int> tup1 = make_tuple(1,2);
    tuple <int, int> tup2 = make_tuple(3,4);
    tup1.swap(tup2);
    // tup1 ကို tup2 နဲ့နေရာလွဲလိုက်ခြင်းသာဖြစ်တယ်။
    // tuple နှစ်ခုသည် Element အရေအတွက်တူညီရမယ်။
    // data types ချင်းလည်းတူညီရမယ်။
    cout << get<0>(tup1) << endl;
    cout << get<1>(tup1) << endl;
    cout << get<0>(tup2) << endl;
    cout << get<1>(tup2) << endl;

    return 0;
}