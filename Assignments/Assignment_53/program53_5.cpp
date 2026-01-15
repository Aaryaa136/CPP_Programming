#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Replace
//Description:      Generic program to replace all occurrence of a value
//Input:            T , integer
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             11/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
void Replace(T Brr[] , int iSize , T oldVal , T newVal)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] == oldVal)
        {
            Brr[iCnt] = newVal;
        }      
    }

    cout<<"Replaced array : \n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {   
        cout<<Brr[iCnt]<<"\t";      
    }
} 

int main()
{
    int iCnt = 0 , iLength = 0;
    int newNo = 0 ,  oldNo = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    int Arr[iLength];

    cout<<"Enter elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Original array : \n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    cout<<"Enter number  : \n";
    cin>>oldNo;

    cout<<"Enter number to be replaced : \n";
    cin>>newNo;

    Replace(Arr,iLength,oldNo,newNo);

    return 0;
}