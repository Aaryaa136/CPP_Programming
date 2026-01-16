#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Min
//Description:      Generic program to find smallest element from array
//Input:            T , T 
//Output:           T
//Author:           Aaryaa Nandkumar Patil
//Date:             15/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Reverse(T *Brr , int iSize)
{
    int iCnt = 0;
    T Min = Brr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] < Min)
        {
            Min = Brr[iCnt];
        }
    }
    
    return Min;
}

int main()
{
    int iCnt = 0;
    int iLenght = 0;
    int Ret = 0;

    cout<<"Enter number of elements : ";
    cin>>iLenght;

    int Arr[iLenght];

    cout<<"Enter elements : \n";
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Array : \n";
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    Ret = Reverse(Arr,iLenght);

    cout<<"Smallest element is : "<<Ret<<"\n";

    return 0;
}