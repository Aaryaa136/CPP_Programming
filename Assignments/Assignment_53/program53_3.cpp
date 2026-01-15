#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    SecondMax
//Description:      Generic program to find second largest element
//Input:            T , integer
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             11/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T SecondMax(T Brr[] , int iSize)
{
    int iCnt = 0;
    T FirstMax = Brr[0];
    T SecondMax = Brr[0];
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] >FirstMax)
        {
            SecondMax = FirstMax;
            FirstMax = Brr[iCnt];
        }     
        else if(Brr[iCnt]  > SecondMax && Brr[iCnt] != FirstMax)
        {
            SecondMax = Brr[iCnt];
        }
    }

    return SecondMax;
} 

int main()
{
    int iCnt = 0 , iLength = 0;
    float fRet = 0.0f;
    int newNo = 0 ,  oldNo = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    float Arr[iLength];

    cout<<"Enter elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Array : \n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    fRet = SecondMax(Arr,iLength);
    cout<<"Second largest element is :"<<fRet<<"\t";

    return 0;
}