#include <iostream>

using namespace std;

int main()
{
    /* 1D Memory allocation and deallocation */

    int *ptr1 = NULL;
    //cout<<ptr1<<endl;
    ptr1 = new int [2];//allocating 1D array
    //cout<<ptr1<<endl;
    cout<<"Here it begins"<<endl;
    //cout<<ptr1<<endl;
    if(ptr1){//true if ptr1 is allocated, equivalent to if(ptr1!=NULL)
        /*
        if(!ptr1) returns true when ptr1 is not allocated, equivalent to if(ptr1==NULL)
        */
        cout<<"Pointer is allocated!"<<endl;
        cout<<"Please enter 2 values: "<<endl;
        for(int i=0; i<2; i++){
            cin>>ptr1[i];
        }
        cout<<"The values of the array are: "<<endl;
        for(int i=0; i<2; i++){
            cout<<ptr1[i]<<endl;
        }
    }else{
        cout<<"Pointer is not allocated!"<<endl; //it happens when ptr1 == NULL
    }
    //cout<<ptr1<<endl;
    delete [] ptr1;//deallocating array
    cout<<ptr1<<endl;
    cout<<"Verifying whether the memory exists after deallocation (will print garbage values if successfully deallocated): "<<endl;
    for(int i=0; i<2; i++){
        cout<<ptr1[i]<<endl;
    }

    cout<<endl<<endl;







    /* 2D memory allocation and deallocation */
    int **ptr2=NULL;
    int row;
    cout<<"Please enter the number of rows: ";
    cin>>row;
    int column[row];//to store the number of columns for each row, as column number may differ
    ptr2 = new int*[row];//allocating memory only for the rows

    //taking input into dynamically allocated array
    for(int i=0; i<row; i++){
        cout<<"Please enter the number of column for the row "<<i+1<<" - ";
        cin>>column[i];
        ptr2[i] = new int[column[i]];//allocating columns for each row
        for(int j=0; j<column[i]; j++){
            cout<<"Please enter the value for index "<<i<<j<<" - ";
            cin>>ptr2[i][j];
        }
    }

    //printing 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<column[i]; j++){
            cout<<"Index "<<i<<j<<" - "<<ptr2[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }

    //deallocating memory
    for(int i=0; i<row; i++){
        delete [] ptr2[i];
    }
    delete [] ptr2;

    return 0;
}
