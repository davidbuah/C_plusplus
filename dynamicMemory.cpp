#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 10;

    string *names = new string[10];
    names[0] = "John Doe";
    cout << *p << endl;
    cout << p << endl; // Memory address
    // *p=54;
    // cout<<*p;
    // This changes the value stored in the pointer
    

    //Creating 2d arrays
    int** board= new int* [10];
    for(int row=0; row<10;row++){
        board[row]= new int[6];
    }

    // Deleting the dynamic variable.
    delete p;
    delete[] names;
    return 0;
}