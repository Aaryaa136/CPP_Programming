#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Min
//Description:      Generic program to find smallest value from N values
//Input:            N
//Output:           T
//Author:           Aaryaa Patil
//Date:             09/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Max(T Brr[] , int Size)
{
    int iCnt = 0;
    T Min;

    Min = Brr[0];

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
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
    int iLength = 0;
    int iCnt = 0;
    float Ret = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    float Arr[iLength];

    cout<<"Enter elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Elements of array : \t";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    Ret = Max(Arr,iLength);
    cout<<"Minimum is : "<<Ret<<"\n";

    return 0;
}