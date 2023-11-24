#include<iostream>
using namespace std;

int main(){
    int num[8];
    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
        num[i] = i+1;
    }
    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
        cout << num[i] << ' ';
    }

    return 0;
}