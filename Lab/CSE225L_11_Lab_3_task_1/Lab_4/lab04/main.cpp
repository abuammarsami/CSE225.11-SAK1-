#include <iostream>

#include "studentinfo.h"
#include<string>
using namespace std;

int main()
{
    studentInfo s1[5];
    s1[0].setStudentInfo(15234,"Jon",2.6);
    s1[1].setStudentInfo(13732,"Tyrion",3.9);

    if ( s1[0]<s1[1])
        cout<< "Tyrion has better cgpa"<<endl;
    else
        cout<< "Jon has better cgpa"<<endl;

    cout<<endl;

    return 0;
}
