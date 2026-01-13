/////////////////////////////////////////////////////
//      Generalized Data Structure Library
/////////////////////////////////////////////////////

/*
---------------------------------------------------------------------------------------------------
Type                    Name of class for node          Name of class of Functionality
---------------------------------------------------------------------------------------------------
Singly Linear           SinglyLLLNode                   SinglyLLL 
Singly Circular         SinglyCLLNode                   SinglyCLL
Doubly Linear           DoublyLLLNode                   DoublyLLL  
Doubly Circular         DoublyCLLNode                   DoublyCLL 
Stack                   StackNode                       Stack           
Queue                   QueueNode                       Queue           
*/

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//          Singly Linear LinkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template<class T>
class SinglyLLLNode
{
    public:
        T data;
        SinglyLLLNode<T> *next;

        SinglyLLLNode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template<class T>
class SinglyLLL
{
    private:
        SinglyLLLNode<T> * first;
        int iCount;

    public:
    
        SinglyLLL();

        void InsertFirst(T);    
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);  

        void Display();
        int Count(); 

        bool Search(T No);  
        bool IsEmpty();
        bool CheckSorted();

        int FirstOccur(T No);
        int LastOccur(T No);
};

template<class T>
SinglyLLL<T> :: SinglyLLL()
{
    cout<<"Object of SinglyLL gets  created\n";
    this->first = NULL;
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: InsertFirst(T no)     
{
    SinglyLLLNode<T> * newn = NULL;

    newn = new SinglyLLLNode<T>(no);

    newn -> next =  this->first;      
    this->first = newn;

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: InsertLast(T no)
{
    SinglyLLLNode<T> *  newn = NULL;
    SinglyLLLNode<T> *  temp = NULL;

    newn = new SinglyLLLNode<T>(no);

    if(this->iCount == 0)            
    {
        this->first = newn;   
    }
    else
    {
        temp = this->first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: DeleteFirst()
{
    SinglyLLLNode<T> * temp = NULL;

    if(this->first == NULL)                      
    {
        return;
    }
    else if(this->first -> next == NULL)           
    {
        delete  this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;
        this->first = this->first -> next;
        delete temp;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void  SinglyLLL<T> :: DeleteLast()
{
    SinglyLLLNode<T> * temp = NULL;

    if(this->first == NULL)                      
    {
        return;
    }
    else if(this->first -> next == NULL)           
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp =  this->first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display nodes from linked list 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: Display()
{
    SinglyLLLNode<T> * temp = NULL;
    int iCnt = 0;
    temp =  this->first;

    for(iCnt=1 ; iCnt <=  this->iCount ; iCnt++)
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count number of nodes from linked list
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyLLL<T> :: Count()
{
    return this->iCount;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node , Position
//  Output :            Nothing
//  Description :       Used to insert node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: InsertAtPos(T no , int pos)
{
    SinglyLLLNode<T> * newn = NULL;
    SinglyLLLNode<T> * temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > this->iCount+1)
    {
            cout<<"Invalid position\n";
            return;
        }

        if(pos == 1)
        {
            this->InsertFirst(no);
        }
        else if(pos ==  this->iCount + 1)
        {
            this-> InsertLast(no);
        }
        else
        {
            newn = new SinglyLLLNode<T>(no);

            temp = this->first;

            for(iCnt=1 ; iCnt < pos-1 ; iCnt++)
            {
                temp =  temp -> next;
            }

            newn -> next = temp -> next;
            temp -> next = newn;

            this->iCount++;
        }        
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position
//  Output :            Nothing
//  Description :       Used to delete node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    SinglyLLLNode<T> * temp = NULL;
    SinglyLLLNode<T> * target = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(iCnt=1 ; iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;            
        temp -> next = target -> next;

        delete target;

        this->iCount--;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Search
//  Input :             Data
//  Output :            Boolean
//  Description :       Used to check whether a number is present or not
//  Author :            Aaryaa Nandkumar Patil
//  Date :              09/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
bool SinglyLLL <T> :: Search(T No)
{
    bool bFlag = false;

    SinglyLLLNode<T> *temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        if(temp -> data == No)
        {
            bFlag = true;
        }

        temp = temp -> next;
    }

    return bFlag; 
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     IsEmpty
//  Input :             Nothing
//  Output :            Boolean
//  Description :       Used to check whether linked list is empty or not 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              09/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
bool SinglyLLL <T> :: IsEmpty()
{
    bool bFlag = false;

    SinglyLLLNode<T> *temp = NULL;
    temp = this->first;

    while(temp == NULL)
    {
        bFlag = true;
    }

    return bFlag; 
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckSorted
//  Input :             Nothing
//  Output :            Boolean
//  Description :       Used to check whether linked list is sorted 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              09/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
bool SinglyLLL <T> :: CheckSorted()
{
    bool bFlag = false;

    SinglyLLLNode<T> *temp = NULL;
    temp = this->first;

    while(temp -> data > temp -> data + 1)
    {
        bFlag = true;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     FirstOccur
//  Input :             Data
//  Output :            Integer
//  Description :       Used to return position of first occurence 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              09/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyLLL <T> :: FirstOccur(T No)
{
    int iIndex = 0;
    int iCnt = 0;

    SinglyLLLNode<T> *temp = NULL;
    temp = this->first;

    iCnt = 1;
    while(temp != NULL)
    {
        if(temp->data == No)
        {
            iIndex = iCnt;
            break;
        }

        iCnt++;
        temp = temp -> next;
    }

    return iIndex;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     LastOccur
//  Input :             Data
//  Output :            Integer
//  Description :       Used to return position of last occurence 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              09/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyLLL <T> :: LastOccur(T No)
{
    int iIndex = 0;
    int iCnt = 0;

    SinglyLLLNode<T> *temp = NULL;
    temp = this->first;

    iCnt = 1;
    while(temp != NULL)
    {
        if(temp->data == No)
        {
            iIndex = iCnt;
        }

        iCnt++;
        temp = temp -> next;
    }

    return iIndex;
}


////////////////////////////////////////////////////////////////////////
//          Doubly Linear LinkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template<class T>
class DoublyLLLNode
{
    public:
        T data;
        DoublyLLLNode *next;
        DoublyLLLNode *prev;
  
        DoublyLLLNode(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

template<class T>
class DoublyLLL
{
    private:
        DoublyLLLNode<T> * first;                
        int iCount;

    public:
        DoublyLLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

template<class T>
DoublyLLL <T> :: DoublyLLL()
{
    cout<<"Linked list gets created\n";

    this->first = NULL;
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL<T> :: InsertFirst(T no)
{
    DoublyLLLNode<T> *newn = NULL;                          

    newn = new DoublyLLLNode<T>(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL <T> :: InsertLast(T no)
{
    DoublyLLLNode<T> *newn = NULL;
    DoublyLLLNode<T> *temp = NULL;

    newn = new DoublyLLLNode<T>(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
    }

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node , Position
//  Output :            Nothing
//  Description :       Used to insert node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL <T> :: InsertAtPos(T no, int pos)
{
    DoublyLLLNode<T> *newn = NULL;
    DoublyLLLNode<T> *temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount + 1)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount + 1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new DoublyLLLNode<T>(no);

        temp = this->first;

        for(iCnt = 1; iCnt < pos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;

        this->iCount++;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL <T>  :: DeleteFirst()
{
    if(this->first == NULL)        
    {
        return;
    }
    else if(this->first->next == NULL)    
    {
        delete(this->first);
        this->first = NULL;
    }
    else                                 
    {
        this->first = this->first->next;
        delete this->first->prev;

        this->first->prev = NULL;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL <T> :: DeleteLast()
{
    DoublyLLLNode<T> *temp = NULL;

    if(this->first == NULL)        
    {
        return;
    }
    else if(this->first->next == NULL)    
    {
        delete(this->first);
        this->first = NULL;
    }
    else                                 
    {
        temp = this->first;
        
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position 
//  Output :            Nothing
//  Description :       Used to delete node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL <T>  :: DeleteAtPos(int pos)
{
    DoublyLLLNode<T> *temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(iCnt = 1; iCnt < pos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete temp->next->prev;

        temp -> next -> prev = temp;

        this->iCount--;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display nodes from linked list 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLLL <T> :: Display()
{
    DoublyLLLNode<T> *temp = NULL;

    temp = this->first;

    cout<<"\nNULL <=>";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=>";
        temp = temp -> next;
    }
    cout<<" NULL\n";
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count nodes from LL
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int DoublyLLL <T> :: Count()
{
    return this->iCount;
}

////////////////////////////////////////////////////////////////////////
//          Singly Circular LinkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template<class T>
class SinglyCLLNode
{
    public:
        T data;
        SinglyCLLNode *next;
  
        SinglyCLLNode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template<class T>
class SinglyCLL
{
    private:
        SinglyCLLNode<T> * first;   
        SinglyCLLNode<T> * last;             
        int iCount;

    public:
        SinglyCLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

template<class T>
SinglyCLL <T> :: SinglyCLL()
{
    cout<<"Linked list gets created\n";

    this->first = NULL;
    this->last = NULL;    
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL<T> :: InsertFirst(T no)
{
    SinglyCLLNode<T> *newn = NULL;                          

    newn = new SinglyCLLNode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn -> next = this -> first;
        this->first = newn;
    }

    this->last->next = this->first;

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL<T> :: InsertLast(T no)
{
    SinglyCLLNode<T> *newn = NULL;
    SinglyCLLNode<T> *temp = NULL;

    newn = new SinglyCLLNode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this-> last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = newn;
    }

    this->last->next = this->first;

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node , Position
//  Output :            Nothing
//  Description :       Used to insert node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL <T> :: InsertAtPos(T no, int pos)
{
    SinglyCLLNode<T> *newn = NULL;
    SinglyCLLNode<T> *temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount + 1)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount + 1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new SinglyCLLNode<T>(no);

        temp = this->first;

        for(iCnt = 1; iCnt < pos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
        
        this->iCount++;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL<T>  :: DeleteFirst()
{
    if(this->first == NULL)        
    {
        return;
    }
    else if(first == last)    
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else                                 
    {
        this->first = this->first->next;
        delete this->last->next;
        this->last->next = this->first;        
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL <T> :: DeleteLast()
{
    SinglyCLLNode<T> *temp = NULL;

    if(this->first == NULL && this->last == NULL)        
    {
        return;
    }
    else if(this->first->next == NULL)    
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else                                 
    {
        temp = this->first;
        
        do
        {
            temp = temp -> next;
        } while (temp->next != this->last);

        delete temp -> next;
        this->last = temp;
        this->last->next = this->first;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position
//  Output :            Nothing
//  Description :       Used to delete node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL <T>  :: DeleteAtPos(int pos)
{
    SinglyCLLNode<T> *temp = NULL;
    SinglyCLLNode<T> *target = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(iCnt = 1; iCnt < pos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = target -> next;
        delete target;

        this->iCount--;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display nodes from linked list 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCLL <T> :: Display()
{
    SinglyCLLNode<T> *temp = NULL;

    temp = this->first;

    cout<<" -> ";
    do
    {
        cout<<" | "<<temp->data<<"| ->";
        temp = temp -> next;
    }while(temp != first);   

    cout<<"\n";
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count nodes from LL
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyCLL <T> :: Count()
{
    return this->iCount;
}

////////////////////////////////////////////////////////////////////////
//          Doubly Circular LinkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template<class T>
class DoublyCLLNode
{
    public:
        T data;
        DoublyCLLNode *next;
        DoublyCLLNode *prev;
  
        DoublyCLLNode(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

template<class T>
class DoublyCLL
{
    private:
        DoublyCLLNode<T> * first;   
        DoublyCLLNode<T> * last;             
        int iCount;

    public:
        DoublyCLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

template<class T>
DoublyCLL <T> :: DoublyCLL()
{
    cout<<"Linked list gets created\n";

    this->first = NULL;
    this->last = NULL;    
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL<T> :: InsertFirst(T no)
{
    DoublyCLLNode<T> *newn = NULL;                          

    newn = new DoublyCLLNode<T>(no);

    if(this->first == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn -> next = this -> first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->last->next = this->first;
    this->first->prev = this->last;

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    DoublyCLLNode <T> *newn = NULL;
    DoublyCLLNode<T> *temp = NULL;

    newn = new DoublyCLLNode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this-> last = newn;
    }
    else
    {
        this->last->next = newn;
        this->first->prev = newn;
        this->last = newn;
    }

    this->last->next = this->first;
    this->first->prev = this->last;

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node , Position
//  Output :            Nothing
//  Description :       Used to insert node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL<T> :: InsertAtPos(T no, int pos)
{
    DoublyCLLNode<T> *newn = NULL;
    DoublyCLLNode<T> *temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount + 1)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount + 1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new DoublyCLLNode<T>(no);

        temp = this->first;

        for(iCnt = 1; iCnt < pos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        newn -> prev = temp;
        temp -> next = newn;
        this->first->prev = this->last;
        
        this->iCount++;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at first position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL<T>  :: DeleteFirst()
{
    if(this->first == NULL)        
    {
        return;
    }
    else if(first == last)    
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else                                 
    {
        this->first = this->first->next;
        delete this->first->prev;
        
        this->last->next = this->first;
        this->first->prev = this->last;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node at last position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL<T> :: DeleteLast()
{
    DoublyCLLNode<T> *temp = NULL;

    if(this->first == NULL && this->last == NULL)        
    {
        return;
    }
    else if(this->first->next == NULL)    
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else                                 
    {
        temp = this->first;
        
        do
        {
            temp = temp -> next;
        } while (temp->next != this->last);

        delete temp -> next;
        this->last = temp;
        this->last->next = this->first;
        this->first->prev = this->last;
    }

    this->iCount--;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position
//  Output :            Nothing
//  Description :       Used to delete node at nth position
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL <T> :: DeleteAtPos(int pos)
{
    DoublyCLLNode<T> *temp = NULL;
    DoublyCLLNode<T> *target = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(iCnt = 1 ; iCnt < pos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next = target -> next;
        target -> next  -> prev = temp;
        delete target;

        this->iCount--;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display nodes from linked list 
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCLL<T> :: Display()
{
    DoublyCLLNode<T> *temp = NULL;

    temp = this->first;

    cout<<" <=> ";
    do
    {
        cout<<" | "<<temp->data<<"| <=>";
        temp = temp -> next;
    }while(temp != first);   

    cout<<"\n";
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count nodes from the LL
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int DoublyCLL <T> :: Count()
{
    return this->iCount;
}

////////////////////////////////////////////////////////////////////////
//              Stack using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template<class T>
class Stacknode
{
    public:
        T data;
        Stacknode<T> *next;

        Stacknode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template<class T>
class Stack
{
    private:
        Stacknode<T> *first;
        int iCount;
    
    public:
        Stack();

        void push(T);            
        T pop();                
        T peep();

        void Display();
        int  Count();

        bool Search(T No);
};

template<class T>
Stack<T> :: Stack()
{
    cout<<"Stack gets created successfully\n";

    this->first = NULL;
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Push
//  Input :             Element
//  Output :            Nothing
//  Description :       Used to insert element in stack
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void Stack<T> :: push(T no)          
{
    Stacknode<T> *newn = NULL;

    newn = new Stacknode<T>(no);

    newn -> next = this->first;
    this->first = newn;

    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Pop
//  Input :             Nothing
//  Output :            Element
//  Description :       Used to delete element from stack
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
T Stack<T> :: pop()
{
    T Value = 0;
    Stacknode<T> *temp = this->first;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }

    Value = this->first->data;

    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;
}   

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Peep
//  Input :             Nothing
//  Output :            Element
//  Description :       Display top element
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
T Stack<T> :: peep()
{
    T Value = 0;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }

    Value = this->first->data;

    return Value;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display elements from the Stack
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void Stack<T> :: Display()
{
    Stacknode<T> *temp = this->first;

    if(this->first == NULL)
    {
        cout<<"Stack is empty";
        return;
    }

    while(temp != NULL)
    {
        cout<<"|\t"<<temp->data<<"\t|\n";
        temp = temp -> next;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of elements
//  Description :       Used to count elements from stack
//  Author :            Aaryaa Nandkumar Patil
//  Date :              06/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int Stack<T> :: Count()
{
    return this->iCount;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Search
//  Input :             Element
//  Output :            Boolean
//  Description :       Used to check whether element is present in stack
//  Author :            Aaryaa Nandkumar Patil
//  Date :              09/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
bool Stack<T> :: Search(T No)
{
    Stacknode <T> *temp = NULL;
    bool bFlag = false;

    temp = this->first;

    while(temp != NULL)
    {
        if(temp -> data == No)
        {
            bFlag = true;
        }
        
        temp = temp -> next;
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////////
//              Queue using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template<class T>
class Queuenode
{
    public:
        T data;
        Queuenode<T> *next;

        Queuenode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template<class T>
class Queue
{
    private:
        Queuenode<T> *first;
        Queuenode<T> *last;
        int iCount;
    
    public:
        Queue();

        void enqueue(T);            
        T dequeue();                
    
        void Display();
        int  Count();
};

template<class T>
Queue<T>:: Queue()
{
    cout<<"Queue gets created successfully\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Enqeue
//  Input :             Element
//  Output :            Nothing
//  Description :       Used to insert element in queue
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void Queue<T> :: enqueue(T no)          
{
    Queuenode<T> *newn = NULL;

    newn = new Queuenode<T>(no);

    if(this->first == NULL && this->last == NULL)  
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = this->last->next;    
    }
    
    this->iCount++;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Dequeue
//  Input :             Nothing
//  Output :            Element  
//  Description :       Used to delete element from the queue
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
T Queue<T> :: dequeue()
{
    T Value = 0;
    Queuenode<T> *temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }

    Value = this->first->data;

    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;
}   

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display elements from the queue
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
void Queue<T> :: Display()
{
    Queuenode<T> *temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is empty";
        return;     
    }

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | - ";
        temp = temp -> next;
    }

    cout<<"\n"; 
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of elements
//  Description :       Used to count elements from the queue
//  Author :            Aaryaa Nandkumar Patil
//  Date :              07/01/2026
//
////////////////////////////////////////////////////////////////////////////

template<class T>
int Queue<T> :: Count()
{
    return this->iCount;
}

////////////////////////////// End Of Library /////////////////////////////////

int main()
{
    return 0;
}