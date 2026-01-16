#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//Function Name:    Max
//Description:      Generic program to find maximum of four values
//Input:            T , T 
//Output:           T
//Author:           Aaryaa Nandkumar Patil
//Date:             16/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Max(T No1 , T No2 , T No3 , T No4)
{
    T max = No1;

    if(No2 > max) max = No2;
    if(No3 > max) max = No3;
    if(No4 > max) max = No4;

    return max;

}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Max(45,90,87,12);
    printf("Maximum is : %d\n",iRet);

    fRet = Max(8.7,11.3,87.6,34.2);
    printf("Maximum is : %f\n",fRet);

    return 0;
}