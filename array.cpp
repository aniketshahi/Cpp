#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 100000;
        cout << "Enter your ID: ";
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of the employee is: " << id << endl;
    }
};

int main()
{
    employee fc[100];
    for (int i = 0; i < 7; i++)
    {
        fc[i].setid();
        fc[i].getid();
    }

    
    return 0;
}