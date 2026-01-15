#include<iostream>
using namespace std;

template<class T>
T SecondMin(T Brr[] , int iSize)
{
    int iCnt = 0;
    T FirstMin = 0;
    T SecondMin = 0;
    
    if(Brr[0] < Brr[1])
    {
        FirstMin = Brr[0];
        SecondMin = Brr[1];
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] < FirstMin)
        {
            SecondMin = FirstMin;
            FirstMin = Brr[iCnt];
        }     
        else if(Brr[iCnt]  < SecondMin && Brr[iCnt] != FirstMin)
        {
            SecondMin = Brr[iCnt];
        }
    }

    return SecondMin;
} 

int main()
{
    int iCnt = 0 , iLength = 0;
    char Ret = '\0';
    int newNo = 0 ,  oldNo = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    char Arr[iLength];

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

    Ret = SecondMin(Arr,iLength);
    cout<<"Second minimum element is :"<<Ret<<"\t";

    return 0;
}