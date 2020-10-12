#include<iostream>
using namespace std;

int factorial(int x)
{
    if (x <=1)
    {
        return 1;
    }
    return x * factorial(x-1);
    
}

int fib(int x)
{
    if (x<=2)
    {
        return 1;
    }
    return fib(x-1) + fib (x-2); 
}
int main ()
{
    int x;
    cout << "Enter a number to find its factoria: " << endl;
    cin >> x;
    cout << "\n Factorial of number is :" << factorial(x)<<endl;
    cout << "\n Fibonnaci of number is :" << fib(x)<<endl;

    return 0;

}