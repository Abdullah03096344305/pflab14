#include<iostream>
using namespace std;

void passingToArray(int arr[] , int size);
main()
{
int size = 3;
int numbers[size] = {1,2,3};
passingToArray(numbers,size);
    
}

void passingToArray(int arr[] , int size)
{
for (int i = 0; i < size; i++)
{
    cout<<arr[i];
}

}