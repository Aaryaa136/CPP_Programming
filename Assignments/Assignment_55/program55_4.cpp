#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//Function Name:    Swap
//Description:      Generic program to swap 2 numbers
//Input:            T , T 
//Output:           T
//Author:           Aaryaa Nandkumar Patil
//Date:             16/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
void Swap(T &No1 , T &No2)
{
    T temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int a= 10 , b = 20;

    printf("Values before swapping : %d %d\n",a,b);

    Swap(a,b);
    printf("Values after swapping : %d %d\n",a,b);

    float x = 3.5f , y = 7.8f;

    printf("Values before swapping : %f %f\n",x,y);

    Swap(x,y);
    printf("Values after swapping : %f %f\n",x,y);

    return 0;
}