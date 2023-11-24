#include<iostream>
using namespace std;

int main(){
    int exam_score;
    cout << "Enter your exam score: ";
    cin >> exam_score;
    if(exam_score == 100){
        cout << "You've got A in exam!";
    }else if(exam_score >= 80 && exam_score < 100){
        cout << "You've got B in exam!";
    }else if(exam_score >= 60 && exam_score < 80){
        cout << "You've got C in exam!";
    }else if(exam_score >= 40 && exam_score < 60){
        cout << "You've got D in exam!";
    }else if(exam_score >=0 && exam_score < 40){
        cout << "You failed the exam!";
    }else{
        cout << "Enter valid charaters";
    }
    return 0;
}