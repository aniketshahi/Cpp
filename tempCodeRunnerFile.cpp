#include <iostream>
using namespace std;

class employee
{
    int id;
    int count;

public:
    void setData(void)
    {
        cout << "Enter the ID: ";
         cin >> id;
    }
    void getData(void)
    {
        cout << "The ID of the employee is: " << id<<endl;
    }
} ;
int main()
{

    employee aniket,prince,akash;

    aniket.setData();
    aniket.getData();