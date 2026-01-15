#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    AddN
//Description:      Generic program to add N values
//Input:            N
//Output:           T
//Author:           Aaryaa Patil
//Date:             09/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T AddN(T Brr[] , int Size)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        Sum = Sum + Brr[iCnt];
    }

    return Sum;
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

    Ret = AddN(Arr,iLength);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}