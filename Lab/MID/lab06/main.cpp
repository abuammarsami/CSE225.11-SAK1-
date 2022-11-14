#include <iostream>
#include "stacktype.cpp"
#include <string>

using namespace std;

bool pBalance(string exp);

int main()
{
    StackType<int> s1;
    if(s1.IsEmpty())
        cout<<"Stack is Empty."<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

    //cout<<s1.Top()<<endl;

    s1.Push(5);
    s1.Push(7);
    s1.Push(4);
    s1.Push(2);
    //s1.Push(10);
    //s1.Push(11);

    if(s1.IsEmpty())
        cout<<"Stack is Empty."<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

    if(s1.IsFull())
        cout<<"Stack is Full."<<endl;
    else
        cout<<"Stack is not Full"<<endl;

    s1.printItem();

    s1.Push(3);
    s1.printItem();

    if(s1.IsFull())
        cout<<"Stack is Full."<<endl;
    else
        cout<<"Stack is not Full"<<endl;

    s1.Pop();
    s1.Pop();

    cout<<"Top item: "<<s1.Top()<<endl<<endl;


    string expr = "(())()(()())()";
    StackType<char> st;
    bool flag = true;

    for(int i=0; i<expr.length(); i++){
        char a = expr[i];
        if(a == '(')
            st.Push('(');
        else if(a == ')'){
            if(st.IsEmpty()){
                flag = false;
                break;
            }
            else
                st.Pop();
        }
    }
    if(flag && st.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balanced"<<endl;


//    if(pBalance(expr))
//        cout<< "Balanced"<<endl;
//    else
//        cout<<"Not Balanced"<<endl;


    return 0;
}

bool pBalance(string exp)
{
    StackType<char> ss;

    for(int i=0; i<exp.length();i++)
    {
        if(exp[i] == '(')
        {
            ss.Push(exp[i]);
            continue;
        }

        if(exp[i] == ')')
        {
            if(ss.IsEmpty())
                return false;

            ss.Pop();
        }
    }
    return (ss.IsEmpty());
}
