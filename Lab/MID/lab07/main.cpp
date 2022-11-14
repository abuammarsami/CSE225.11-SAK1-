#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> q(5);
    int inp = 0;
    for (int i=0; i<5;i++)
    {
        cin>>inp;
        q.Enqueue(inp);

    }




}
