#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    
} 

int main()
{
    int a,b;
     cout<<"Enter number 1:";
     cin>>a;
     cout<<"Enter number 2:";
     cin>>b;

     cout<<"the numbers before swap number 1:"<<a<<endl<<"Number 2 is :"<<b<<endl;
     swap(a,b);
     cout<<"the numbers after swap number 1:"<<a<<endl<<"Number 2 is :"<<b;
    return 0;
}