#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;
public:
    void setData(void)
    {
        cout << "Enter the ID: ";
         cin >> id;
         count++;
    }
    void getData(void)
    {
        cout << "The ID of the employee "<< count<< " is: " << id<<endl;
    }
    static void getcount(void)
    {
        cout<<"The value of the count is: "<<count<<endl;
    }
} ;
   int employee:: count;

int main()
{
    static int count;

    employee aniket,prince,akash;

    aniket.setData();
    aniket.getData();
    employee::getcount();

    prince.setData();
    prince.getData();
    employee::getcount();

    akash.setData();
    akash.getData();
    employee::getcount();
    return 0;
}