#include<iostream>
using namespace std;

int main()
{
    int length=0;
    int *Arr=NULL;

    cout<<"Enter the number of elements:\n";
    cin>>length;

    //step1:allocate the memory
    Arr=new int(length);       

    if(Arr==NULL)
    {
        cout<<"Unable to allocate memory\n";
    }
    else
    {
        cout<<"Memory gets succeefully allocated\n";
    }

    //step2:use the memory

    //step3:deallocate the memory
    delete []Arr;           //if we use[] then entire memory gets deallocated
    //if just delete Arr -only base address memory will get dealloacte and not entire


    return 0;
}