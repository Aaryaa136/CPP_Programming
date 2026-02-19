#include<stdio.h>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Min
//Description:      Find minimum digit from a number using recursion
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             13/2/26
//
//////////////////////////////////////////////////////////

int Min(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        Min(iNo / 10);
    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Minimum digit is : %d\n",iRet);
    
    return 0;
}