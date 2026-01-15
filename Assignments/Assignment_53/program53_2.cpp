#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    CheckSorted
//Description:      Generic program to check whether array is sorted
//Input:            T , ArrayLength
//Output:           Boolean
//Author:           Aaryaa Nandkumar Patil
//Date:             11/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
bool CheckSorted(T Brr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize-1 ; iCnt++)
    {
        if(Brr[iCnt] > Brr[iCnt + 1])
        {
            return false;
        }
    }

    return true;
} 

int main()
{
    int iCnt = 0 , iLength = 0;
    bool bRet = false;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    float Arr[iLength];

    cout<<"Enter elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    bRet = CheckSorted(Arr,iLength);

    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted";
    }

    return 0;
}