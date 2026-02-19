#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Multi
//Description:      Calculate product of a number using recursion
//Input:            Integer
// Output:          Integer         
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

int Multi(int iNo)
{ 
    static int iProd = 1;
    static  int iDigit = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;

        Multi(iNo);
    }

    return iProd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = Multi(iValue);

    cout<<"Product is : "<<iRet<<"\n";

    return 0;
}