#include <iostream>
using namespace std;

void passArray(int Array1[], int size1, int Array2[], int size2, int Array3[], int size);

main()
{
    int size1 = 5;
    int size2 = 3;
    int size = size1 + size2;
    int Array1[size1] = {1, 2, 3, 4, 5};
    int Array2[size2] = {1, 2, 1};
    int Array3[size];
    passArray(Array1, size1, Array2, size2, Array3, size);
}
void passArray(int Array1[], int size1, int Array2[], int size2, int Array3[], int size)
{

    for (int i = 0; i < size1; i++)
    {
        Array3[i] = Array1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        Array3[i + size1] = Array2[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << Array3[i];
    }
}