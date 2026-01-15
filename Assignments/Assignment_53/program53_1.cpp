#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    CopyArray
//Description:      Generic program to copy one array into another
//Input:            T , T , int
//Output:           Nothing
//Author:           Aaryaa Nandkumar Patil
//Date:             11/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
void CopyArray(T *src , T *dest , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        dest[iCnt] = src[iCnt];         
    }

    cout<<"Copied array is : \n";
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<dest[iCnt]<<"\t";         
    }
    cout<<"\n";
} 

int main()
{
    int iCnt = 0 , iLength = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    char Source[iLength];
    char Destination[]={'\0'};    

    cout<<"Enter elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Source[iCnt];
    }

    cout<<"Array : \n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Source[iCnt]<<"\t";
    }
    cout<<"\n";

    CopyArray(Source,Destination,iLength);

    return 0;
}