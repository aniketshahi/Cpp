#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a,int b,int c);
        void getData()
        {
            cout<<"value of a is :"<<a<<endl;
            cout<<"value of b is :"<<b<<endl;
            cout<<"value of c is :"<<c<<endl;
            cout<<"value of d is :"<<d<<endl;
            cout<<"value of e is :"<<e<<endl;
        }
};

void Employee::setData(int a1,int b1,int c1)
{
       a=a1;
       b=b1;
       c=c1;
}
int main()
{
    Employee aniket;
    aniket.d=34;
    aniket.e=89;
    aniket.setData(1,2,4);
    aniket.getData();
    return 0;
}