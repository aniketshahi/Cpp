#include<iostream>
using namespace std;
inline int product (int a,int b)
{
     
    return a*b;
}

int main()
{
    int a,b;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"The sum of 2 numbers are :"<<product(a,b);
    return 0;
}