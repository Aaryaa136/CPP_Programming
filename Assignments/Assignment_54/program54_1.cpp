#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Search
//Description:      Generic program to search value in array
//Input:            T , T , integer
//Output:           Boolean
//Author:           Aaryaa Nandkumar Patil
//Date:             15/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
bool Search(T *Brr , int iSize , T Value)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] == Value)
        {
            bFlag = true;
        }
    }

    return bFlag;
}

int main()
{
    int iCnt = 0 , iLength = 0;
    int Value = 0;
    bool bRet = false;

    cout<<"Enter number of elements : ";
    cin>>iLength;

    int Arr[iLength];

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
    printf("\n");

    cout<<"Enter element to search : \n";
    cin>>Value;

    bRet = Search(Arr,iLength,Value);

    if(bRet == true)
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }

    return 0;
}