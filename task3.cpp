#include<iostream>
using namespace std;

void swapnumbers(int &number1,int &number2);
main()
{
int number1  ;
int number2 ;

cout<<"enter number 1:";
cin>>number1;
cout<<"enter number 2: ";
cin>>number2;

swapnumbers(number1 , number2);
cout<<"Number 1 = "<<number1;
cout<<endl;
cout<<"Number 2 = "<<number2;
}

void swapnumbers(int &number1,int &number2)
{
int temp = number1;
number1 = number2;
number2  = temp;
}