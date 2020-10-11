// Operators in cpp are covered in this tutorial
#include<iostream>
 using namespace std;

 int main()
 {
     int num1, num2;
     
     cout << "Following are the types of operators in cpp: "<<endl;
     cout<< "Enter numbers : "<<endl;
     cin>> num1;
     cin>> num2;
     // Addition
     cout<< "Addition of number is :"<< num1 + num2 <<endl;
     // Subtraction
     cout << "Subtraction of numbers is :"<< num1 - num2 <<endl;
     // Multiplication
     cout << "Multiplication of numbers is :"<< num1 * num2 <<endl;
     // Division
     cout << "Division of numbers is :"<< num1 / num2 <<endl;
     // Modulus
     cout << "Mod of numbers is :"<< num1 % num2 <<endl;
     // Increment /Decrement operators
     cout << "Increment of num1 is :"<< num1 ++  <<endl;
     cout << "Increment of num1 is :"<< ++num1  <<endl;
     cout << "Decrement of num1 is :"<< num1 --  <<endl;
     cout << "Decrement of num1 is :"<< --num1  <<endl;
     return 0;

 }