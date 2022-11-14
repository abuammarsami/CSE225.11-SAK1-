#include <iostream>
#include "unsortedtype.cpp"
#include "studentinfo.h"
using namespace std;

int main()
{
    UnsortedType<int> ut;

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    for(int i=0; i<ut.LengthIs(); i++)
    {
        int temp;
        ut.GetNextItem(temp);
        cout<<temp<<"\t";
    }
    cout<<endl;
    ut.ResetList();

    cout<<"The length of the list is "<<ut.LengthIs()<<endl;

    ut.InsertItem(1);

    for(int i=0; i<ut.LengthIs(); i++)
    {
        int temp;
        ut.GetNextItem(temp);
        cout<<temp<<"\t";
    }
    cout<<endl;
    ut.ResetList();


    int temp = 10;
    bool flag = false;
    ut.RetrieveItem(temp,flag);
    if(flag)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;


    if(ut.IsFull())
        cout<<"List is full!"<<endl;
    else
        cout<<"List is not full!"<<endl;

    ut.DeleteItem(5);

    if(ut.IsFull())
        cout<<"List is full!"<<endl;
    else
        cout<<"List is not full!"<<endl;


    ut.DeleteItem(1);

    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(temp);
        cout<<temp<<"\t";
    }
    cout<<endl;
    ut.ResetList();

    ut.DeleteItem(6);

    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(temp);
        cout<<temp<<"\t";
    }
    cout<<endl;
    ut.ResetList();

    studentInfo s1[5];
    //s1[0].
    UnsortedType<studentInfo> ob;
    ob.InsertItem(s1[0]);
    ob.DeleteItem(s1[3]);
    ob.RetrieveItem(s1[0],flag);


    return 0;
}
