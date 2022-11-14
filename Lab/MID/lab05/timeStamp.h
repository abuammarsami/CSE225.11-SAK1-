#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class TimeStamp
{
public:
    TimeStamp();
    void setSec(int );
    void setMins(int );
    void setHour(int );
    int getSec();
    int getMins();
    int getHour();
    void PrintTime();
    bool operator>(TimeStamp&);
    bool operator==(TimeStamp&);

private:
    int sec;
    int mins;
    int hour;
};
#endif // TIMESTAMP_H_INCLUDED
