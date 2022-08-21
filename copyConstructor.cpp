#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number()\
    {
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        cout<<"copy constructor call"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"The number for the object is: "<<a<<endl;
    }
};
int main()
{
    number x(89),y,z;
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();
    return 0;
}