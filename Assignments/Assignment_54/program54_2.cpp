#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    SumEven
//Description:      Generic program to find summ of even elements
//Input:            T , T 
//Output:           Sum
//Author:           Aaryaa Nandkumar Patil
//Date:             15/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T SumEven(T *Brr , int iSize)
{
    int iCnt = 0;
    int SumEven = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] % 2 == 0)
        {
            SumEven = SumEven + Brr[iCnt];
        }
    }

    return SumEven;
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

    Ret = SumEven(Arr,iLength);

    cout<<"Sum of even elements is : "<<Ret<<"\n";

    return 0;
}