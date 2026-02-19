#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Sum
//Description:      Summation of digit using recursion
//Input:            Integer
// Output:          Integer         
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iSum = 0;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10; 

        Sum(iNo);
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number : ";
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<"Summation is : "<<iRet<<"\n";
    
    return 0;
}