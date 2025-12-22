#include<iostream>
using namespace std;

namespace PPA
{
    int i=11;
}

namespace LB
{
    int i=21;
}

int main()
{
    cout<<PPA::i<<"\n";
    cout<<LB::i<<"\n";

    return 0;
}


/*
error: 'i' was not declared in this scope
     cout<<i<<"\n";
 'PPA::i'
     int i=11;
         ^
'LB::i'
     int i=21;


     cin and cout:inside std
     */