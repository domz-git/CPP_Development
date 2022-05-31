#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int firstNumber, secondNumber, result;

    cout<<"Enter the first number: ";
    cin>>firstNumber;
    cout<<"Enter the second number: ";
    cin>>secondNumber;

    result = firstNumber + secondNumber;
    cout<<"The sum of the two numbers is: "<<result<<endl;
    result = firstNumber - secondNumber;
    cout<<"The difference of the two numbers is: "<<result<<endl;
    result = firstNumber * secondNumber;
    cout<<"The multiplication of the two numbers is: "<<result<<endl;
    result = firstNumber / secondNumber;
    cout<<"The division of the two numbersi is: "<<result<<endl;

return 0;

}