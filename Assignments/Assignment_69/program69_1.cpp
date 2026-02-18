#include<stdio.h>

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
        printf("*\t");
        iNo--;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}