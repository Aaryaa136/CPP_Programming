#include<stdio.h>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Max
//Description:      Find maximum digit from a number using recursion
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             13/2/26
//
//////////////////////////////////////////////////////////

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        Max(iNo / 10);
    }

    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Maximum digit is : %d\n",iRet);

    return 0;
}