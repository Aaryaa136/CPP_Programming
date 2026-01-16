#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    SumOdd
//Description:      Generic program to find summ of odd elements
//Input:            T , T 
//Output:           Sum
//Author:           Aaryaa Nandkumar Patil
//Date:             15/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T SumOdd(T *Brr , int iSize)
{
    int iCnt = 0;
    int SumOdd = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] % 2 != 0)
        {
            SumOdd = SumOdd + Brr[iCnt];
        }
    }

    return SumOdd;
}

int main()
{
    int iCnt = 0 , iLength = 0;
    int Ret = 0;

    cout<<"Enter number of elements : ";
    cin>>iLength;

    int Arr[iLength];

    cout<<"Enter elements : \n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    printf("Array : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    Ret = SumOdd(Arr,iLength);

    cout<<"Sum of odd elements is : "<<Ret<<"\n";

    return 0;
}