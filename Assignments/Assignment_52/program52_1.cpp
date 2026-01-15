#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Multiply
//Description:      Generic program to multiply numbers
//Input:            T , T
//Output:           T
//Author:           Aaryaa Patil
//Date:             09/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Multiply(T No1 , T No2)
{
    T Ans;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    int iValue1 = 0 , iValue2 = 0;
    float fValue1 = 0.0f , fValue2 = 0.0f; 
    
    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;
    
    iRet = Multiply<int>(iValue1,iValue2);
    cout<<"Multiplication is:"<<iRet<<"\n";

    cout<<"Enter first number : ";
    cin>>fValue1;
    
    cout<<"Enter second number : ";
    cin>>fValue2;
    
    float fRet = 0.0f;

    fRet = Multiply<float>(fValue1,fValue2);
    cout<<"Multiplication is:"<<fRet<<"\n";

    return 0;
}