#include<iostream>
using namespace std;

struct employee
{
    int emp_id;
    char name;
    float salary;
};

union details  // unions are same as structures but better in memory management
{
    /* data */
    int years;
    char car;
    float price;
};

int main()
{
    struct employee amol;
    amol.emp_id = 1;
    amol.name = 'a';
    amol.salary = 1200000;
    cout << "Employee id is: " <<amol.emp_id <<endl;
    cout << "name  is: " <<amol.name <<endl;
    cout << "salary  is: " <<amol.salary <<endl;

    struct employee suraj;
    suraj.emp_id = 2;
    suraj.name = 's';
    suraj.salary = 1400000;
    cout << "Employee id is: " <<suraj.emp_id <<endl;
    cout << "name  is: " <<suraj.name <<endl;
    cout << "salary  is: " <<suraj.salary <<endl;

    union details cars;
    cars.years = 2;
    cout << " This car is "<< cars.years <<" years old" <<endl;


    enum Meal{raftaar, raga, tushar};
    Meal m1 = tushar;
    cout << "Meal m1 is: " << m1;

    return 0;
}