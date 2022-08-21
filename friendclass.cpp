#include <iostream>
using namespace std;
class complex;
class calculator
{
   public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealnumber(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator :: sumrealnumber(complex , complex );

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealnumber(complex o1, complex o2)
{
    return (o1.a + o2.b);
}
int main()
{
    complex o1,o2;
    o1.setnumber(5,6);
    o1.setnumber(5,8);
    calculator calc;
    int res=calc.sumrealnumber(o1,o2);
    cout<<"the sum of the real part of o1 and o2 is"<<res<<endl;
    o1.printnumber();

    return 0;
}