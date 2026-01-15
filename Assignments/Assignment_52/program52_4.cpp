#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Max
//Description:      Generic program to find largest value from N values
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
    T Max;

    Max = Brr[0];

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        if(Brr[iCnt] > Max)
        {
            Max = Brr[iCnt];
        }
    }

    return Max;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int Ret = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    int Arr[iLength];

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
    cout<<"Maximum is : "<<Ret<<"\n";

    return 0;
}