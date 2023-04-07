#include <iostream>

using namespace std;

int main()
{
    int score = 5;
    int *scorePtr;
    scorePtr = &score;

    //outputs memory location
    //cout << scorePtr << endl;

    //outputs the value of score
    //cout << score << endl;

    //outputs the value of the variable stored in pointer *scorePtr
    //cout << *scorePtr << endl;



    //dynamic memory
    /*int *p = new int; //request memory
    *p = 5; //store value


    cout << *p << endl; //use value

    delete p; //free up the memory*/



    //sizeof operator: number of employees
    int ages[] = {
        19, 24, 36, 45, 56, 52,
        21, 27, 24, 34, 29, 60, 40, 42, 45, 47,
        22, 30, 34, 20, 18, 26, 51, 43, 47, 39,
        22, 34, 56, 52, 21, 27, 24, 37, 19, 24,
        36, 45, 44, 49, 23, 25, 19, 40, 29, 60,
        40, 42, 45, 47, 61, 30, 19, 43, 47, 39,
        41, 46, 29, 24, 21, 25, 28};

    cout << sizeof(ages)/4;

    return 0;
}
