#include<iostream>
#include<cmath>
using std::cout;
using std::endl;
using std::cin;

int main(){
    const double PI = 3.141592;
    double radius, area;
    cout << "Enter radius : ";
    cin >> radius;
    if(cin.fail()){
        cout << "Please, Enter valid numbers!";
    }else{
        area = PI * pow(radius, 2);
        cout << "The area of circle : " << area << " cm^2" << endl;
    }
    
    return 0;
}