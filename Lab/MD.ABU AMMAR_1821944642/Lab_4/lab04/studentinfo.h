#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>
using namespace std;

class studentInfo
{
    public:
        studentInfo();
        studentInfo(int,string,double);
        ~studentInfo();
        bool operator!=(studentInfo);
        bool operator==(studentInfo);
        void getStudentInfo();
        void setStudentInfo(int, string, double);
    private:
        int id;
        string name;
        double cgpa;

};

#endif // STUDENTINFO_H
