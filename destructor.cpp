#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for an object number" << count << endl;
    }
    ~num()
    {
        cout << "This is the time when my destuctor is called for the object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside the main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Creating two more objects" << endl;
        num n2, num3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}