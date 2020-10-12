// Operators in cpp are covered in this tutorial
#include<iostream>
 using namespace std;

void arithmetic(int num1, int num2)
{
     cout << "Following are the types of arithmetic operators in cpp: "<<endl;
     
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
}

void assignment(int num1, int num2)
{
    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of num1 == num2 is "<<(num1==num2)<<endl;
    cout<<"The value of num1 != num2 is "<<(num1!=num2)<<endl;
    cout<<"The value of num1 >= num2 is "<<(num1>=num2)<<endl;
    cout<<"The value of num1 <= num2 is "<<(num1<=num2)<<endl;
    cout<<"The value of num1 > num2 is "<<(num1>num2)<<endl;
    cout<<"The value of num1 < num2 is "<<(num1<num2)<<endl; 
}

void logical(int num1, int num2)
{
    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((num1==num2) && (num1<num2)) is:"<<((num1==num2) && (num1<num2))<<endl; 
    cout<<"The value of this logical or operator ((num1==num2) || (num1<num2)) is:"<<((num1==num2) || (num1<num2))<<endl; 
    cout<<"The value of this logical not operator (!(num1==num2)) is:"<<(!(num1==num2))<<endl; 
}

 int main()
 {
    int num1, num2;
    cout<< "Enter numbers : "<<endl;
    cin>> num1;
    cin>> num2;
    arithmetic(num1, num2);
    assignment(num1, num2);
    logical(num1, num2);
    return 0;

 }