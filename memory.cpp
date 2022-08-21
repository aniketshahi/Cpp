#include<iostream>
using namespace std;

class shop
{
   int itemId[100];
   int itemPrice[100];
   int counter;
   public :
   void initCounter(void){counter=0;};
   void getItem(void);
   void getPrice(void);
   void displayPrice(void);

};
 void shop::getPrice(void)
{
     cout<<"Enter ID of your item: ";
     cin>>itemId[counter];
     cout<<"Enter price of your item: ";
     cin>>itemPrice[counter];
     counter ++;
}
void shop::displayPrice(void)
{
    for(int i=0; i<counter;i++)
    {
        cout<<"the price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
     shop dukaan;
    dukaan.initCounter();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.displayPrice();
    return 0;
}