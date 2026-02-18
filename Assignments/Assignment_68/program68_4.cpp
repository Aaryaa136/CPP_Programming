#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display A to F using recursion
//Input:            Nothing
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

void Display()
{
    static char ch = 'A';
    static int i = 1;

    if(i <= 6)
    {
        cout<<ch<<"\t";
        ch++;
        i++;

        Display();
    }
}

int main()
{
    Display();
    
    return 0;
}