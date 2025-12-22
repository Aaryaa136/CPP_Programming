#include<iostream>
using namespace std;

namespace PPA
{
    int i=11;
}

namespace LB
{
    int j=21;
}

using namespace LB;      //can access lb content directly

int main()
{
    cout<<PPA::i<<"\n";     //cant access ppa content directly
    cout<<j<<"\n";          //due to line 14

    return 0;
}

