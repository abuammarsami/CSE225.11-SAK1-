#include "quetype.h"
#include <iostream>
using namespace std;

template<class T>
QueType<T>::QueType(int max) {
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new T[maxQue];
}

template<class T>
QueType<T>::QueType() {
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new T[maxQue];
}


template<class T>
QueType<T>::~QueType() {
    delete [] items;
}

template<class T>
void QueType<T>::MakeEmpty() {
    front = maxQue - 1;
    rear = maxQue - 1;
}

template<class T>
bool QueType<T>::IsEmpty() {
    return (rear == front);
}

template<class T>
bool QueType<T>::IsFull() {
    return ((rear+1)%maxQue == front);
}

template<class T>
void QueType<T>::Enqueue(T newItem) {
    if (IsFull())
        cout<<"Queue Overflow"<<endl;
    else{
        rear = (rear +1) % maxQue;
        items[rear] = newItem;
    }
}

template<class T>
void QueType<T>::Dequeue(T& item) {
    if (IsEmpty())
        cout<<"Queue Underflow"<<endl;
    else{
        front = (front + 1) % maxQue;
        item = items[front];
    }
}

