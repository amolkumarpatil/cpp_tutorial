#include<iostream>
using namespace std;

int main()
{
    // declaring an array of integers
    int sample[4] = {1,12,32,54};
    cout << sample[1] << endl ;  // printing second value in an array

    for (int i =0; i<=sizeof(sample)/sizeof(*sample);i++)
    {
        cout<< sample[i] <<"\n";
    }

    int* p = sample;  // This will store the address of first element of array named sample
    cout << "Value of array at *p: "<< *p << endl;
    cout << "Value of array at *p+1: "<< *(p+1 )<< endl;
    cout << "Value of array at *p+2: "<< *(p+2 )<< endl;
    cout << "Value of array at *p+3: "<< *(p+3) << endl;
 
    return 0;
}