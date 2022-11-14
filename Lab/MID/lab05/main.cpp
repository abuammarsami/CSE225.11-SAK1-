#include"sortedType.cpp"
#include"timeStamp.h"
int main()
{
    TimeStamp t1,t2,t3;
    SortedType<TimeStamp> sTime;
    t1.setSec(35);
    t1.setMins(32);
    t1.setHour(8);
    t2.setSec(30);
    t2.setMins(32);
    t2.setHour(10);
    t3.setSec(14);
    t3.setMins(12);
    t3.setHour(9);
    //t1.PrintTime();
    cout<<endl;
    sTime.InsertItem(t1);
    sTime.InsertItem(t2);
    sTime.InsertItem(t3);
   // sTime.print();
   TimeStamp temp;
   for(int i=0; i<sTime.LengthIs(); i++)
   {
       sTime.GetNextItem(temp);
       temp.PrintTime();
   }

   temp.setHour(8);
   sTime.DeleteItem(temp);

   cout<<sTime.LengthIs()<<endl;
   sTime.ResetList();
   for(int i=0; i<sTime.LengthIs(); i++)
   {
       sTime.GetNextItem(temp);
       temp.PrintTime();
   }


    SortedType<int> st;
    st.InsertItem(4);
    st.InsertItem(3);
    st.InsertItem(2);
    st.InsertItem(5);
    st.DeleteItem(3);

    cout<<endl;
    int item = 4;
    bool found;
    st.RetrieveItem(item, found);
    if(found)
    {
        cout<<item<<" is in the list"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    return 0;
}
