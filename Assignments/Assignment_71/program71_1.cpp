#include<stdio.h>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    WhiteSpace
//Description:      Count white spaces in a string using recursion
//Input:            String
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             13/2/26
//
//////////////////////////////////////////////////////////

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str) == ' ')
        {
            iCount++;
        }

        str++;
        WhiteSpace(str);
    }

    return iCount;
}

int main()
{
    char Arr[30] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    cout<<"Number of white spaces are : "<<iRet<<"\n";

    return 0;
}