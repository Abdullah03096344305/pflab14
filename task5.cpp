#include<iostream>
using namespace std;

int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
void parse(int arr[][3]);

main()
{
parse(arr);
}
void parse(int arr[][3])
{
    int count = 0;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
       count++;
    }    
}

if (count / 2 > 0)
{
   cout<<"sparse matrix";
}
else
cout<<"Not a Sparse Matrix";

    
}