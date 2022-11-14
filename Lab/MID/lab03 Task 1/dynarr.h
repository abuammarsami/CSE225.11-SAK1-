#ifndef DYNARR_H
#define DYNARR_H

template <class T>
class dynArr
{
    private:
        T *data;
        int size;

    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int, T);
        T getValue(int);
        //void allocate(T);
        //void printItem();
};

#endif // DYNARR_H
