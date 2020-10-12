// Reference variables and typcasting in cpp
#include<iostream>
using namespace std;

// declaring a global variable
int num3 = 45;

void built_in(int num1,int num2,int num3 )
{
    
    cout << "addition of both numbers are: " << num1 + num2 <<endl;
    cout << "global variable num3 is: "<< ::num3 << endl;
}

void reference()
{
    // when we want to use same variable with different name then we use refernece variable
    float x = 4.5;
    float & y =x;
    cout << x <<endl;
    cout <<y <<endl;

}

void typecasting()
{
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
}

void variable_size()
{
    // Float, double and long double
    // size of float is 4 byte
    // size of double is 8 byte
    // size of long double is 12 byte
    float num4 = 34.5F;
    long double num5 = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of num4 is "<<num4<<endl<<"The value of num5 is "<<num5;  
}
int main()
{
    int num1, num2, num3;
    cout<< "Enter numbers : "<<endl;
    cin>> num1;
    cin>> num2;
    num3 = num1 + num2;
    built_in(num1, num2, num3 );

    
    variable_size();
    reference();
    typecasting();

    return 0;
}