#include <iostream>

using namespace std;

/*void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}

void printNumber(float x){
    cout << "Prints a float: " << x << endl;
}

int main()
{
    int a = 16;
    float b = 54.541;
    printNumber(a);
    printNumber(b);
}*/


//operator overloading
class MyClass {
public:
    int var;
    MyClass() {}
    MyClass(int a) : var(a) {}

    MyClass operator+(MyClass &obj) {
        MyClass res;
        res.var= this->var+obj.var;
        return res;
    }
};

int main() {
    MyClass obj1(12), obj2(55);
    MyClass res = obj1+obj2;

    cout << res.var;
}