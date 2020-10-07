// This tutorial explains various built-in data types and variable scope by using a function

#include<iostream>

using namespace std;

// Used to try if local variable can be accessed from another function
void var_scope(){
    int a = 5;
    cout << a;
    // cout << local; // we are trying to access local variable from main function here. We will get error here.
}
int glo = 4; // this is a global variable
int main(){
    int num = 2991;  //int variableṇ
    cout<< "My employee id is " << num <<"\n";

    // float variable 
    float pi = 3.143;
    cout << "Float number is " << pi <<"\n";

    // string variable
    string  c = "Amol";
    cout<<c;

    //double variable
    double longnum = 10.3232312321321;
    cout<<"\n" << "This is a double variable " << longnum;

    // accessing global variable
    int local = 9;
    // glo = 23;
    cout<<"\n" << glo;

    var_scope();
    return 0;
}

