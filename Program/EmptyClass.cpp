#include<iostream>
using namespace std;

class Demo
{
    void Display()
    {
        cout<<"Inside Display\n";
    }
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";      //1

    return 0;
}
