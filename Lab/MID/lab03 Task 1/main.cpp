#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    dynArr<char> object1;
    dynArr<char> object2(5);
    char temp;

    cout<<"Insert 5 values: "<<endl;
    for(int i=0; i<5; i++){
        cin>>temp;
        object2.setValue(i,temp);
    }

    cout<<"The array is :"<<endl;

    for(int i=0; i<5; i++)
    {
        temp = object2.getValue(i);
        cout<<"arr["<<i<<"] = "<<temp<<endl;
    }

    //object2.allocate(7);//reallocating the size of memory/array
    //object2.setValue(5,22);//inserting value = 22 at index 5
    //object2.setValue(6,33);//inserting value = 33 at index 6
}
