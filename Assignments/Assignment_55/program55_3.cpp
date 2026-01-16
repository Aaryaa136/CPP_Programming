#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//Function Name:    Div
//Description:      Generic program to perform division of 2 numbers
//Input:            T , T 
//Output:           T
//Author:           Aaryaa Nandkumar Patil
//Date:             16/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Div(T No1 , T No2)
{
    if(No2 == 0)
    {
        return -1;
    }

    T Ans = 0;
    Ans = No1 / No2;
    return Ans;
}

int main()
{
    float iRet = 0;
    iRet = Div(30,20);
    printf("Division is : %f\n",iRet);

    float fRet = 0.0f;
    fRet = Div(10.5f,20.3f);
    printf("Division is : %f\n",fRet);

    return 0;
}