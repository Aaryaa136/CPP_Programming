#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    SearchLast
//Description:      Generic program to search last occurence of element
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             08/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
int SearchLast(T Brr[] , int Size , T No)
{
    int iCnt = 0 , iIndex = 0;

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        if(Brr[iCnt] == No)
        {
            iIndex = iCnt;
        }   
    }

    return iIndex;
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

    cout<<"Enter a element : ";
    cin>>iValue;

    iRet = SearchLast(Arr,iLength,iValue);
    cout<<"Last occurence is:"<<iRet<<"\n";

    return 0;
}