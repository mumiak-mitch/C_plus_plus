//A queue is a linear data structure in which the order of operation is FIFO. 

#include <iostream>

using namespace std;

//int main()
//{
    //this array prints 5:42 infinitely
    /*int myArr[5];

    for(int x=0; x=5; x++) {
        myArr[x] = 42;

        cout << x << ": " << myArr[x] << endl;
    }*/


    //does summation of the array elements
    /*int arr[] = {11, 35, 62, 555, 989};
    int sum = 0;

    for (int x=0; x<5; x++) {
        sum += arr[x];
    }

    cout << sum << endl;*/
//}

//array and functions
void printArray(int arr[], int size) {
    for(int x=0; x<size; x++){
        cout <<arr[x]<< endl;
    }
}
int main() {
    int myArr[3]= {42, 33, 88};
    printArray(myArr, 3);
}