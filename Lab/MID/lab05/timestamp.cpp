#include"timeStamp.h"
#include<iostream>
using namespace std;

TimeStamp::TimeStamp()
{
    sec = mins = hour = 0;
}

void TimeStamp::setSec(int s)
{
    sec = s;
}

void TimeStamp::setMins(int m)
{
    mins = m;
}

void TimeStamp::setHour(int h)
{
    hour = h;
}

int TimeStamp::getSec()
{
    return sec;
}

int TimeStamp::getMins()
{
    return mins;
}

int TimeStamp::getHour()
{
    return hour;
}

void TimeStamp::PrintTime()
{
    cout<< hour<<":"<<mins<<":"<<sec<<endl;
}



bool TimeStamp::operator>(TimeStamp &b)
{
    if((this->hour)>(b.hour))
        return true;
    else
        return false;
}

bool TimeStamp::operator==(TimeStamp &a){
    if(this->hour == a.getHour())
        return true;
    else
        return false;
}

/*

bool operator>=(TimeStamp &a, TimeStamp &b)
{
    if(((a.getHour()*3600)+(a.getMins()*60)+a.getSec()) >= ((b.getHour()*3600)+(b.getMins()*60)+b.getSec()))
        return true;
}

bool operator==(TimeStamp &a, TimeStamp &b)
{
    if(a.getHour()==b.getHour() && a.getMins()==b.getMins() && a.getSec()==b.getSec())
        return true;
    else
        return false;
}

*/
