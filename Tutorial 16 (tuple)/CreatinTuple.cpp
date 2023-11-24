#include<iostream>
#include<tuple>
using namespace std;

int main() {
    // tuple သည် array နဲ့ အတူတူပဲ ဒါပေမဲ့ data types မတူဘဲ store လို့ရတယ်။
    tuple <int, string, bool> person(21, "Swam Htet", true);
    cout << get<0> (person) << endl;
    cout << get<1> (person) << endl;
    cout << get<2> (person) << endl;
    return 0;
}