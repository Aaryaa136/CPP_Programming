#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display A to n  using recursion
//Input:            Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    static char ch = 'A';

    if(iNo >= 1)
    {
        Display(iNo - 1);

        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}