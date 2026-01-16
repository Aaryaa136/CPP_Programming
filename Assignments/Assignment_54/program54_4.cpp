#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Reverse
//Description:      Generic program to reverse an array
//Input:            T , T 
//Output:           Nothing
//Author:           Aaryaa Nandkumar Patil
//Date:             15/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T *Brr , int iSize)
{
    int iCnt = 0;

    cout<<"Reverse array : \n";
    for(iCnt = iSize-1 ; iCnt >= 0 ; iCnt--)
    {
        cout<<Brr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iCnt = 0;
    int iLenght = 0;

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

    Reverse(Arr,iLenght);

    return 0;
}