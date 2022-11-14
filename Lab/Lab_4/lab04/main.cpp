#include <iostream>
#include "unsortedtype.cpp"
#include "studentinfo.h"
#include<string>
using namespace std;

int main()
{
    studentInfo s1;
    studentInfo s2;
    s1.setStudentInfo(15234,"Nasim",3.6);
    s2.setStudentInfo(13732,"Kader",3.9);

    if (s1<s2)
        cout<<"Kader has a better CGPA then Nasim"<<endl;
    else
        cout<<"Nasim has a better CGPA then Kader"<<endl;

    cout<<endl;

    return 0;
}
