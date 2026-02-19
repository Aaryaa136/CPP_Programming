#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Strlen
//Description:      Count characters in a string using recursion
//Input:            String
// Output:          Integer         
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

int Strlen(char *str)
{ 
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;

        Strlen(str);
    }

    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string : ";
    cin>>Arr;

    iRet = Strlen(Arr);

    cout<<"Number of letters in string : "<<iRet<<"\n";

    return 0;
}