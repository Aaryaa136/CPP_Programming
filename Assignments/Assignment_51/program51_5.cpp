#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Reverse
//Description:      Reverse content
//Input:            Integer
//Output:           Nothing
//Author:           Aaryaa Patil
//Date:             08/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T Brr[] , int Size )
{
    int iCnt = 0;

    cout<<"Reversed array:\n";

    for(iCnt = Size - 1; iCnt >= 0 ; iCnt--)
    {
        cout<<Brr[iCnt]<<"\t"; 
    }
}

int main()
{
    int iLength = 0;
    
    cout<<"Enter number of elements:";
    cin>>iLength;

    int Arr[iLength]; 
    int iCnt = 0;

    cout<<"Enter elements:\n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Elements:\n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    Reverse(Arr,iLength);

    return 0;
}