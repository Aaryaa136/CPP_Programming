#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1+iNo2;                    //performed by ALU 
    return iAns;
}

int Substraction(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1-iNo2;
    return iAns;
}

int main()
{ 
    int iRet=0;              //empty bag     (storage class:auto)
 
    iRet=Addition(11,10);   //function call
    printf("Addition is :%d\n",iRet);

    iRet=Substraction(11,10);                          
    printf("substraction is:%d\n",iRet);

    return 0;
}