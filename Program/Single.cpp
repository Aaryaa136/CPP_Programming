#include<iostream>
using namespace std;

class Base              //parent class 
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside base fun\n";
        }

};

class Derived: public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside derived gun \n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of base class object:"<<sizeof(bobj)<<"\n";        //8
    cout<<"Size of derived class object:"<<sizeof(dobj)<<"\n";     //12


    return 0;
}