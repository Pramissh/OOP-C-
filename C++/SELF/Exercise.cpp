// TO INPUT TWO NUMBERS AND DISPLAY LARGER NUMBER 

#include<iostream>
using namespace std;
int main(){
    float num1, num2, largerNUM;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
     if (num1 > num2) {
        cout << "The larger number is: " << num1 ;
    } else if (num2 > num1) {
        cout << "The larger number is: " << num2;
    } else {
        cout << "Both numbers are equal.";
    }

    return 0;
    
}
