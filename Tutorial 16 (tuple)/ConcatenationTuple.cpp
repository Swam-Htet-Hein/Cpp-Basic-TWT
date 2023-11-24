#include<iostream>
#include<tuple>
using namespace std;

int main() {
    tuple <int, char> tup1(1, 'a');
    tuple <string, float, bool> tup2("Hello", 2.5, true);
    // tuple concatenation သည် tuple အသစ်တစ်ခုမှာ မိမိပေါင်းစပ်စေချင်တဲ့ tuple ၂ခုနဲ့ ပေါင်းစပ်လိုက်ခြင်းဖြစ်သည်။
    tuple <int, char, string, float, bool> tup3 = tuple_cat(tup1, tup2);
    // auto tup3 = tuple_cat(tup1, tup2); ဟုရေးလျှင် data types ကြေညာရန်မလိုပါ။
    // သို့သော် data types ကြေညာပြီး ရေးခြင်းကပိုကောင်းသည်။
    cout << get<0>(tup3) << endl;
    cout << get<1>(tup3) << endl;
    cout << get<2>(tup3) << endl;
    cout << get<3>(tup3) << endl;
    cout << get<4>(tup3) << endl;
    return 0;
}