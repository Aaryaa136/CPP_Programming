#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display 1 to n using recursion
//Input:            Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo >= 1)
    {
        Display(iNo - 1);

        printf("%d\t",iNo);
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