#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//Function Name:    Sub
//Description:      Generic program to perform substraction of 2 numbers
//Input:            T , T 
//Output:           T
//Author:           Aaryaa Nandkumar Patil
//Date:             16/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Sub(T No1 , T No2)
{
    T Ans = 0;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    iRet = Sub(30,20);
    printf("Substraction is : %d\n",iRet);

    float fRet = 0.0f;
    fRet = Sub(10.5f,20.3f);
    printf("Substraction is : %f\n",fRet);

    return 0;
}