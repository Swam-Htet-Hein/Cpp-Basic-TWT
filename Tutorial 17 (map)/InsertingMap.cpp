#include<iostream>
#include<map>
using namespace std;

int main() {
    map <char, int> mp;
    // အောက်တွင်ပြထားသည့်နည်းလမ်းများသည် အကုန်အတူတူဖြစ်သည်။
    mp['a'] = 1;
    cout << "'a' : " << mp['a'] << endl;
    // insert function သုံးပြီး တန်ဖိုး ထည့်ခြင်း
    mp.insert(pair<char, int>('b', 2));
    cout << "'b' : " << mp['b'] << endl;
    // pair သည် key နဲ့ value ကို တတွဲတည့် သိမ်းပေးသည်။
    // pair<key_data_type, value_data_type> pair_name(key, value);
    pair<char, int> pair1('c', 3);
    mp.insert(pair1);
    cout << "'c' : " << mp['c'] << endl;
    // pair သီသန့် ဖော်ပြချင်ရင် first နဲ့ second ဆိုပြီးဖော်ပြလည်းရတယ်။
    // pair ကို assign လုပ်ချင်ရင်တော့ make_pair() ကိုသုံးရမယ်။
    pair<char, int> pair2;
    pair2 = make_pair('e', 4);
    cout << "First : " << pair2.first << endl;
    cout << "Second : " << pair2.second << endl;

    return 0;
}