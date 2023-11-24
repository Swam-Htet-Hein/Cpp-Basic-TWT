#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x;
    cout << "You've typed : " << x << endl;
    cout << "Is it wrong? : " << cin.fail();
    /*
        cin.fail() သည်သူ့အပေါ်က ဟာမှန်မမှန်စစ်ဆေးသည်။
        မှားရင် result 1 ထွက်ပြီး မှန်ရင် result 0 ထွက်သည်။
        user ကတစ်ခုခုမှားရိုက်လိုက်ရင် ပြန်ပြီး ရိုက်လို့ရအောင်လုပ်လို့ရသည်။ 
    */
    return 0;
}