#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//declaration and use of functions
/*int addNumbers(int x, int y){
    int result = x + y;
    return result;
}

int main(){
    cout << addNumbers(50, 25);
}*/


//generates random numbers
/*int main(){
    for (int x = 1; x <= 10; x++){
        cout << rand() << endl;
    }
}*/


//generates number of seconds on your system time
int main() {
    srand(time(0));

    for (int x = 1; x <= 10; x++){
        cout << 1 + (rand() % 6) << endl;
    }
}