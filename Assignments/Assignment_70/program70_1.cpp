#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display n times * using recursion
//Input:            Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\t"<<"*\t";
        iNo--;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}