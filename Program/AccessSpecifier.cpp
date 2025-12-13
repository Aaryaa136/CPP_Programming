#include<iostream>
using namespace std;

class Base              //parent class ,12
{
    public:
         int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i=10, j=20, k=30;
        }
        void fun()
        {
            cout<<i<<"\n";         //allowed
            cout<<j<<"\n";         //allowed
            cout<<k<<"\n";         //allowed
        }
};

class Derived: public Base         //sizeof=12+4=16
{
    public:
        void Display()
        {
            cout<<i<<"\n";         //allowed(public)
            cout<<j<<"\n";         //error(private)
            cout<<k<<"\n";        //allowed(protected-immediate derived class)
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";           //allowed(public)
    cout<<bobj.j<<"\n";           //error(as j is private)
    cout<<bobj.k<<"\n";           //error(protected:as main is not derived class)

    cout<<dobj.i<<"\n";           //allowed(public)
    cout<<dobj.j<<"\n";           //error(as j is private)
    cout<<dobj.k<<"\n";           //error:only aaccessed by derived class and not outside in protected  

    dobj.fun();                  //call allowed as it is public
    dobj.Display();              //call allowed as it is public

    return 0;
}