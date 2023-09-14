//this is for demonstrating basic file operations
//test.txt is also available

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile("test.txt");

    if (MyFile.is_open()){
        MyFile << "This is awesome! \n";
    }else{
        cout << "Something went wrong";
    }
    MyFile.close();
}