#include<stdio.h>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Reverse
//Description:      Reverse a number using recursion
//Input:            Integer
//Output:           Nothing
//Author:           Aaryaa Nandkumar Patil
//Date:             13/2/26
//
//////////////////////////////////////////////////////////

void Reverse(int iNo)
{
    static int iDigit = 0;

    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        printf("%d",iDigit);
        Reverse(iNo / 10); 
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Reverse(iValue);

    return 0;
}