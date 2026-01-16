#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//Function Name:    Add
//Description:      Generic program to perform addition of 2 numbers
//Input:            T , T 
//Output:           T
//Author:           Aaryaa Nandkumar Patil
//Date:             16/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Add(T No1 , T No2)
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    iRet = Add(10,20);
    printf("Addition is : %d\n",iRet);

    float fRet = 0.0f;
    fRet = Add(10.5f,20.3f);
    printf("Addition is : %f\n",fRet);

    return 0;
}