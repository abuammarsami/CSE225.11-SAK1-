#include "studentinfo.h"
#include <iostream>
using namespace std;
studentInfo::studentInfo()
{
    //ctor
}

studentInfo::~studentInfo()
{
    //dtor
}
studentInfo::studentInfo(int id,string name,double cgpa)
{
    this->id=id;
    this->name=name;
    this->cgpa=cgpa;


}


bool studentInfo::operator==(studentInfo a)
{
    if(this->cgpa==a.cgpa)
        return true;
    else
        return false;

}
bool studentInfo::operator!=(studentInfo a)
{
    if(this->cgpa!=a.cgpa)
        return true;
    else
        return false;
}
 bool studentInfo::operator<(studentInfo a)
{
    if(this->cgpa<a.cgpa)
        return true;
    else
        return false;
}
bool studentInfo::operator<=(studentInfo a)
{
    if(this->cgpa<=a.cgpa)
        return true;
    else
        return false;
}
bool studentInfo::operator>(studentInfo a)
{
    if(this->cgpa>a.cgpa)
        return true;
    else
        return false;
}
bool studentInfo::operator>=(studentInfo a)
{
    if(this->cgpa>= a.cgpa)
        return true;
    else
        return false;
}
void studentInfo::getStudentInfo()
{
    cout<<"ID:"<<this->id<<endl;
    cout<<"Name:"<<this->name<<endl;
    cout<<"CGPA:"<<this->cgpa<<endl;
}
void studentInfo::setStudentInfo(int id,string name,double cgpa)
{
    this->id=id;
    this->name=name;
    this->cgpa=cgpa;
}

