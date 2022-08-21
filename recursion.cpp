#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    int z=n*factorial(n-1);
    return z;
}

int main()
{
   int n;
   cout<<"Enter any number:";
   cin>>n;

   cout<<"Factorial of "<<n<<" is : "<<factorial(n);
    return 0;
}