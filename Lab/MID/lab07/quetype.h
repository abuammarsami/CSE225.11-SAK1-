#ifndef QUETYPE_H
#define QUETYPE_H

template<class T>
class QueType
{
    public:
         QueType();
         QueType(int max);
         ~QueType();
         void MakeEmpty();
         bool IsEmpty();
         bool IsFull();
         void Enqueue(T);
         void Dequeue(T&);
    private:
        int front;
        int rear;
        T* items;
        int maxQue;
};

#endif // QUETYPE_H
