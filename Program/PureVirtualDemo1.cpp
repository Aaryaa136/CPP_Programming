#include<iostream>
using namespace std;

class Base                
{
    public:
        int i,j;

        int Addition(int A,int B)    //concrete
        {
            return A+B;
        }

        virtual int Substraction(int A,int B)=0;      //abstract(object cant be created)
};

class Derived:public Base        //error
{
    public:
        int x;
};

int main()
{            
    Base *bp=new Derived;                //upasting
   
    return 0;
}
