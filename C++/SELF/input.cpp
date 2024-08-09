// TO FIND SUM OF 2 NUMBERS AND THIER AVERAGE

#include<iostream>
using namespace std; 

int main()
{
    float num1, num2, sum, average;
    cout<< "Enter the numbers"<<"\n";
    cin>> num1 >> num2;
    

    sum = num1 + num2;
    average = sum/2;

    cout << "Sum=" << sum << "\n";
    cout << "average" << average << "\n";

    return 0;
}