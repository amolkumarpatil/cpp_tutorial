// Loops in cpp
#include<iostream>
using namespace std;

void for_loop()
{
    for (int i = 1; i < 10; i ++)
    {
        cout<<i<<"\n";
    }
}

void while_loop()
{
    int i =1;
    cout << "This is a while loop" << endl;
    while (i <=5)
    {
        cout<<i<<"\n";
        i++;
    }
}
void do_while_loop()
{
    int num = 4;
    cout << "This is a do-while loop"<<endl;
    {
        do
        {
            cout<<num<<"\n";
            break;
        } while (num == 4);
        
    }
}

int main()
{
    for_loop();
    do_while_loop();
    while_loop();
    return 0;
}