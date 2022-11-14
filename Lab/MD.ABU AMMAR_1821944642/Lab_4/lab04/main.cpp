#include <iostream>
#include "unsortedtype.cpp"
#include "studentinfo.h"
#include<string>
using namespace std;

int main()
{
    studentInfo s1[5];
    s1[0].setStudentInfo(15234,"Jon",2.6);
    s1[1].setStudentInfo(13732,"Tyrion",3.9);
    s1[2].setStudentInfo(13569,"Sandor",1.2);
    s1[3].setStudentInfo(15467,"Ramsey",3.1);
    s1[4].setStudentInfo(16285,"Arya",3.1);
    UnsortedType<studentInfo> ob;
    ob.InsertItem(s1[0]);
    ob.InsertItem(s1[1]);
    ob.InsertItem(s1[2]);
    ob.InsertItem(s1[3]);
    ob.InsertItem(s1[4]);

    ob.DeleteItem(s1[3]);

    bool flag = false;
    ob.RetrieveItem(s1[2],flag);
    if(flag)
        {
            cout<<"Item is found"<<endl;
            s1[2].getStudentInfo();
        }
    else
        cout<<"Item is not found"<<endl;

        studentInfo s2;
    for(int i=0; i<ob.LengthIs(); i++)
    {
        ob.GetNextItem(s2);
        cout<<"\n\n"<<endl;
        s2.getStudentInfo();
    }
    cout<<endl;

    return 0;
}
