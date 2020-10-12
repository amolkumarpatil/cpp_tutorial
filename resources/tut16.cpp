#include<iostream>

using namespace std;


void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
int main()
{
    int x=4, y=5;
    cout<< "The value of x is: " << x << " The value of y is: "<<y << endl;
    swap(x,y);   // Values will not change
    cout <<"The value of x is: " << x << " The value of y is: "<<y << endl;
    swapPointer(&x, &y);  // values will changes
    cout <<"The value of x is: " << x << " The value of y is: "<<y << endl;
    swapReferenceVar(x, y); // Values will change
    cout <<"The value of x is: " << x << " The value of y is: "<<y << endl;
    return 0;
}