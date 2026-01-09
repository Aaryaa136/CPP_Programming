#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Frequency
//Description:      Generic program to count frquency of specific value
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             08/01/26
//
////////////////////////////////////////////////////////////////////


template<class T>
int Frequency(T Brr[] , int Size , T No)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        if(Brr[iCnt] == No)
        {
            iCount++;
        }   
    }

    return iCount;
}

int main()
{
    int iLength = 0 , iRet = 0 , iValue = 0; 
    int Arr[iLength]; 
    int iCnt = 0;
    
    cout<<"Enter number of elements:";
    cin>>iLength;

    cout<<"Enter elements:\n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter a number : ";
    cin>>iValue;

    iRet = Frequency(Arr,iLength,iValue);
    cout<<"Frequency is:"<<iRet<<"\n";

    return 0;
}