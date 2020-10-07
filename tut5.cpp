// This tutorial gives an idea about cpp input and output operations
// Input operations are those operations where memory gets an input from external device ex keyboard
// Output operations are those which output data stream to external devices like a monitor

#include<iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout <<"Enter a number : " ;   // "<<" this is an insertion operator
    cin >> num1;                   // ">>" this is an extraction operator

    cout << "\nEnter another number :";
    cin >> num2;

    cout << "\nAddition of both number is :" << num1 + num2;
    
    return 0;


}