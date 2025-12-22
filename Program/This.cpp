#include<iostream>                              //input output stream
using namespace std;

class Arithmetic            //encapsulation
{ 
    public:                //abstraction
        int iNo1;          //characteristics , declare 
        int iNo2;          //no memory is allocated so not initialized

        Arithmetic()      //default constructor  , (callback function)   ,[behaviour] 
        {
            iNo1=0;
            iNo2=0;
        }

        Arithmetic(int A,int B)     //parametrized constructor , (callback function) ,[behaviour] 
        {
            iNo1=A;
            iNo2=B;
        }
        
        int Addition()           //no parame ters:already have , [behaviour] 
        {
            int iAns=0;
            iAns=iNo1+iNo2;
            return iAns;
        }

        int Substraction()           //no parameters:already have  ,[behavour]
        {
            int iAns=0;
            iAns=iNo1-iNo2;
            return iAns;
        }
};

int main()
{
    Arithmetic aobj1(11,10); 

    Arithmetic aobj2(21,21); 

    int iRet=0;
  
    iRet=aobj1.Addition();                        //call
    cout<<"Addition is:"<<iRet<<"\n";

    iRet=aobj1.Substraction();                   //call
    cout<<"Substraction is:"<<iRet<<"\n";

    iRet=aobj2.Addition();                        //call
    cout<<"Addition is:"<<iRet<<"\n";

    iRet=aobj2.Substraction();                   //call
    cout<<"Substraction is:"<<iRet<<"\n";

    return 0;
}