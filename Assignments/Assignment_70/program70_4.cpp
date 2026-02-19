#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Fact
//Description:      Calculate factorial using recursion
//Input:            Integer
// Output:          Integer         
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

int Fact(int iNo)
{ 
    static int iFact = 1;

    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        iNo--;

        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"Factorial is : "<<iRet<<"\n";

    return 0;
}