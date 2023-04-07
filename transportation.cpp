#include <iostream>
using namespace std;

int main()
{   /*
        You are making a program for a bus service. A bus can transport 50 passengers at once. Given the number of passengers
        waiting in the bus station as 126 and the number of buses as 3, calculate and output how many empty seats the last bus
        will have.
    */

    int passengers;
    int capacity;
    int firstLeft;
    int secondLeft;
    int seatsLeft;

    passengers = 126;
    capacity = 50;
    firstLeft = passengers - capacity;
    cout << "Total number of people waiting at the station is 126." << endl;
    cout << "The first bus will leave " << firstLeft << " people at the station" << endl;

    secondLeft = firstLeft - capacity;
    cout << "The second bus will leave " << secondLeft << " people at the station" << endl;

    seatsLeft = capacity - secondLeft;
    cout << "The third bus will have " << seatsLeft << " empty seats" << endl;

    return 0;
}
