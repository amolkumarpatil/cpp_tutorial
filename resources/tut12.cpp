#include<iostream>
using namespace std;

int main(){

    int a = 3;
    int *b;
    b = &a;

    // & is the 'address of' operator
    cout << "The address of a is: " << &a <<endl;
    cout << "The address of b is: " << b << endl; 

    //  * is the "value at" operator
    cout << "Value at b: " <<*b << endl;


    // pointer to pointer 
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 
    return 0;


}
