#ifndef DYNARR_H
#define DYNARR_H


class dynArr
{
    private:
        int *data;
        int size;

    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int, int);
        int getValue(int);
        void allocate(int);
        void printItem();
};

#endif // DYNARR_H
