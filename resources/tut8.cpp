// constants, manipulators and operator procedures in cpp
#include<iostream>
#include <iomanip>

using namespace std;

void manipulators()
{
    // Manipulators : language manipulators are used in the formatting of output
    // you need to add header <iomanip> for setw function 
    int a =3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
}

void constant()
{
    // const variables are unchangable throughout the scope of the code
    const float a = 3.12;
    cout << a << endl;
    // now try to assign any value to a, you will get an error
    // a = 12.2121;
}

void operators()
{
    // Operator precedence helps us to solve an expression. 
    // For example, in an expression "int c = a*b+c" the multiplication operator's precedence is higher than 
    // the preced"ence of addition operator, so the multiplication between "a & b" first and then addition will be 
    // performed."

    // Operator associativity helps us to solve an expression; when two or more operators have the same 
    // precedence, the operator associativity helps us to decide that we should solve the expression from 
    // "left-to-right" or from "right-to-left".

    // Operator Precedence
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
}
int main (){

    constant();
    manipulators();
    operators();

    return 0;
}