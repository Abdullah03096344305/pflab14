#include<iostream>
#include<conio.h>

using namespace std;
void Shuffle(int Numbers[],int size,int iteration);
main()
{
    int size = 9;
    int iteration;
    int Numbers[size] = {1,2,3,4,5,6,7,8,9};    
    cout<<"enter Number Of Iteration:";
    cin>>iteration;
    Shuffle(Numbers,size,iteration);

}
void Shuffle(int Numbers[],int size,int iteration)
{
    for (int i = 0; i < iteration; i++)
    {
       
    Numbers[i] = Numbers[];
    cout<<Numbers[i];
    }
    for (int i = 0; i < iteration; i++)
    {
        
    }
    
    
    
}