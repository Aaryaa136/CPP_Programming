#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display 1 to 5 using recursion
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
        cout<<i<<"\t";
        i++;

        Display();
    }
}

int main()
{
    Display();
    
    return 0;
}