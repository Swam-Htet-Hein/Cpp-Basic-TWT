#include<iostream>
#include<string>
using namespace std;

int main(){
    const string password = "swam123";
    string userInput;
    cout << "Enter your password : ";
    cin >> userInput;
    if(userInput == password){
        cout << "Your password is correct!";
    }else{
        cout << "Your password is incorrect!";
    }
    return 0;
}