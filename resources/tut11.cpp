#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i==2)
        {
            break; // Terminates whole loop if condition is satisfied
        }
        if (i==3)
        {
            continue;  
        }
        cout << i <<"\n";  //Terminates current iteration if condition is satisfied

    }
    return 0;
}