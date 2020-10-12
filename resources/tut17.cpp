#include<iostream>
using namespace std;

inline int sum (int a, int b)
{
    return a+b;
}

float salary (int month, float money = 50000)
{
    return month*money ;
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers :" <<endl;
    cin >> a>> b ;
    cout << "\n" << "Sum of a and b is : " << sum(a,b)<<endl;
    cout << "\n" << "Sum of a and b is : " << sum(a,b)<<endl;

    int month =4;
    cout << "output without using default args: " << salary(month, 10000)<< endl;
    cout << "output with using default args: " << salary(month);
    return 0;
}