#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else 
     return fib(n-2)+fib(n-1);
}

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    cout<<"The fibnocchi series of giveb number is: "<<fib(n);
    return 0;
}