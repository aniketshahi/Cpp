#include<iostream>
using namespace std;

struct employee
{
     int eId;
     char favChar;
     float salary;
};

int main()
{

     struct employee Aniket;
     Aniket.eId=1;
     Aniket.favChar='c';
     Aniket.salary=12849; 

      cout<<"The value of given input is:"<<Aniket.eId<<endl;
      cout<<"The value of given input is:"<<Aniket.favChar<<endl;
      cout<<"The value of given input is:"<<Aniket.salary<<endl ;
    return 0;
}