#include<iostream>
using namespace std;

int sum (int a, int b)
{
    return a+b;
}
int sum (int a, int b, int* c)
{
    return a+b+*c;
}
int main ()
{
    int x = 2, y=5,z=9;
    cout << "sum of x and y is : " << sum(x,y) <<endl;
    cout << "sum of x, y and z is : " << sum(x,y,&z) <<endl;

    return 0;

}