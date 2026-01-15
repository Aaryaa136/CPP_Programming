#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Max
//Description:      Generic program to find largest from three numbers
//Input:            T,T,T
//Output:           T
//Author:           Aaryaa Patil
//Date:             09/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
T Max(T No1 , T No2 , T No3)
{
    if(No1 > No2 && No1 > No2)
    {
        cout<<No1<<" is greater\n";
    }
    else if(No2 > No1 && No2 > No3)
    {
        cout<<No2<<" is greater\n";
    }
    else
    {
        cout<<No3<<" is greater\n";
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
    float fValue1= 0.0f , fValue2 = 0.0f , fValue3 = 0;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;

    cout<<"Enter third number : ";
    cin>>iValue3;

    Max<int>(iValue1,iValue2,iValue3);

    cout<<"Enter first number : ";
    cin>>fValue1;

    cout<<"Enter second number : ";
    cin>>fValue2;

    cout<<"Enter third number : ";
    cin>>fValue3;

    Max<float>(fValue1,fValue2,fValue3);
    
    return 0;
}