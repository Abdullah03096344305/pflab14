#include<iostream>

using namespace std;

void changenumber(int number);
main()
{
    int number = 10;
    int *p = &number;
    cout<<"address  of number: "<<p;
    cout<<endl;
    cout<<"Value stored in Number: "<<*p;
    cout<<endl;
    changenumber(number);
    cout<<"After Function: "<<number;


}

void changenumber(int number)
{
    number++;
    cout<<"In function"<<number;
    cout<<endl;
}