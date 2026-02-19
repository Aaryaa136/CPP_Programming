#include<stdio.h>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    CountSmall
//Description:      Count lower case in a string using recursion
//Input:            String
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             13/2/26
//
//////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }

        str++;
        CountSmall(str);
    }

    return iCount;
}

int main()
{
    char Arr[30] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    cout<<"Number of small characters : "<<iRet<<"\n";

    return 0;
}