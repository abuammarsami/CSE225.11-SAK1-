#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex a;
    Complex b(4,4);
    Complex f(2,4);

    //Complex c = a.addition(b);
    Complex d = b+a;
    //Complex e = a*b;

    if(f==b)
        cout<<"Equal"<<endl;
    else
        cout<<"Not equal"<<endl;



    //a.Print();
    //b.Print();
    //c.Print();
    //d.Print();
    //e.Print();

}
