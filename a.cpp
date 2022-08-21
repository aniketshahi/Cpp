#include<iostream>
#include<ostream>
using namespace std;
struct person
{
    char name[100];
    int age;
    double salary;
};
int main()
{
    person p1,name[100];
    cout<<"person detail"<<endl<<"Enter your name: ";
    cin>>p1.name[100];
    cout<<"enter your age :";
    cin>>p1.age;
     cout<<"enter your salary :";
    cin>>p1.salary;
    return 0;
}