#include <iostream>
using namespace std;

/*
    တကယ်လို့ ပထမ cin မှာ အမှားပါခဲ့ရင် program က နောက် cin ကို လက်ခံနိုင်တော့
    ပဲ terminal ကို သူ့အလိုလို အဆုံးသတ်လိုက်တယ်။
*/

int main(){
    int x, y;
    cin >> x;
    cin.clear(); // cin.clear()သည် အမှားပါနေတဲ့ x တန်ဖိုးကိုပဲဖြတ်တယ်။ဘာမှမမှားဘူးဆိုရင် ဒီအတိုင်းဆက်သွားတယ်။
    cin.ignore(1000, '\n'); // cin.ignore()သည် ပထမမှားထားတဲ့ဟာကို ပလပ်လိုက်ပြီးနောက်ထက်cin ကိုလက်ခံတယ်။
    cout << x << endl;
    cin >> y;
    cout << y;
    // programmer တွေ input တွေအများကြီး လက်ခံချင်ရင် ဒီဖြေရှင်းနည်းက အသုံးဝင်တယ်။
}