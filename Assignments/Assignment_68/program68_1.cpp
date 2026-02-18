#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display 5 times * using recursion
//Input:            Nothing
//Author:           Aaryaa Nandkumar Patil
//Date:             11/2/26
//
//////////////////////////////////////////////////////////

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        cout<<"*\t";
        i++;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}