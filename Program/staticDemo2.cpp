#include<iostream>
using namespace std;

class Demo
{
     public:
         int i;                 //non static characteristics
         int j;                //non static characteristics
         static int x;         //static characteristics

         Demo()               //non static function/behaviour
         {
            this->i=0;
            this->j=0;

         }

         Demo(int a,int b)
         {
            this->i=a;
            this->j=b;
         }

         void Fun()                   //void Fun(Demo *const this)             
         {
            cout<<"Inside Fun\n";
            cout<<"Value of i is:"<<this->i<<"\n";
            cout<<"Value of j is:"<<this->j<<"\n";
            cout<<"Value of x is:"<<x<<"\n";
         }

         static void Gun()           //static behaviour - void Fun()
         {
             cout<<"Inside Gun\n";
         }

};

int Demo::x=11;

int main()
{
    Demo::Gun();                                  // :: scope resolution operator 
    cout<<"Value of x is:"<<Demo::x<<"\n";

    Demo obj(10,20);
    obj.Fun();

    return 0;
}