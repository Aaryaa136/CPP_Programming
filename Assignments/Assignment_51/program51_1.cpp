#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Generic program to display value , N numbers of time
//Input:            Integer,Integer
//Output:           Nothing
//Author:           Aaryaa Patil
//Date:             08/01/26
//
////////////////////////////////////////////////////////////////////

template<class T>
void Display(T Value , int Size)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= Size ; iCnt++)
    {
        cout<<Value<<"\t";
    }
}

int main()
{
    int iNo = 0 , iCount = 0;
    char ch = '\0';
    double d = 0.0;
    
///////////////////////////////////////////////////////////////////////////

    cout<<"Enter character:";
    cin>>ch;

    cout<<"Enter how many times to display:";
    cin>>iCount;

    Display<char>(ch,iCount);
    cout<<"\n";

///////////////////////////////////////////////////////////////////////////

    cout<<"Enter integer value:";
    cin>>iNo;

    cout<<"Enter how many times to display:";
    cin>>iCount;

    Display<int>(iNo,iCount);
    cout<<"\n";

///////////////////////////////////////////////////////////////////////////

    cout<<"Enter double value:";
    cin>>d;

    cout<<"Enter how many times to display:";
    cin>>iCount;

    Display<double>(d,iCount);
    cout<<"\n"; 

///////////////////////////////////////////////////////////////////////////

    return 0;
}