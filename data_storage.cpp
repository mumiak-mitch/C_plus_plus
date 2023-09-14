#include <iostream>
using namespace std;

void printArray(string arr[], int size) {
    for(int x=0; x<15; x++){
        cout <<arr[x]<< endl;
    }
}
int main() {
    string myArr[15]= {"Mitchel Akoth", "Max Otieno", "John Ngugi", "Denzel Murathi", "Ron Ezra", "Boaz Okumu", "Bivon Mose", "Peter Iroga", "Zipporah Jepngetich", "Edddie Lundu", "Clinton Nyaberi", "Mrema Jono", "Precious Nyagaka", "Lawrence Kiptala", "Bryan Alango"};
    printArray(myArr, 15);
}