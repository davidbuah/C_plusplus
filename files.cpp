#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile;              // 1. create the stream object
    outFile.open("hello.txt");     // 2. connect it to a file
    outFile << "Hello, file!"<<endl;     // 3. write to it
    outFile << "Another sentence added" <<endl;
    outFile.close();               // 4. disconnect and save

    return 0;
}