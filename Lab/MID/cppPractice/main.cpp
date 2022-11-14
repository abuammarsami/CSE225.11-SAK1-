#include <iostream>
#include <string>
using namespace std;

void arrPrint(int *arr1)
{
    cout<<"Printing from the function: "<<endl;
    cout<<arr1[0]<<endl;
    cout<<*arr1<<endl;
    *arr1 = 20;

}

void abc(int *a);


int main()
{
    //cout << "Hello world!" << endl<<endl<<endl;
//    int num;
//    cout<<"Please enter an integer number: "<<endl;
//    cin>>num;
//    cout<<"The number is "<<num<<" which is an integer."<<endl;
//
//    //bool, char, int, float, double;
//    typedef float nF;
//    nF var;
//    cin>>var;
//    cout<<var<<endl;

    string str = "Hello World";
    cout<<str<<endl;

    string str1="";
    //getline(cin, str1);
    //cout<<str1<<endl;

    int a = 10;
    int *ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    *ptr = 100;
    cout<<a<<endl<<endl<<endl;

    int arrSize = 5;
    int arr[arrSize] = {5,6,7,8,9};
    cout<<arr[4]<<endl;
    cout<<*(arr+4)<<endl;

    *(arr+4) = 100;
    cout<<arr[4]<<endl;

    arrPrint(arr);
    cout<<arr[0]<<endl;
//    double a;

    cout<<endl<<endl;

    int b = 10;
    abc(&b);
    //cout<<&b<<endl;
    cout<<b<<endl;

    //int &c = b;

    return 0;
}

void abc(int *a)
{
    *a = 50;
    //cout<<&a<<endl;
}
