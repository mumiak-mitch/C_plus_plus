#include <iostream>
using namespace std;

/*class Queue {
 int size;
 int* queue;
 public:
 Queue() {
  size = 0;
  queue = new int[100];
 }
 void remove() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  else {
   for (int i = 0; i < size - 1; i++) {
    queue[i] = queue[i + 1];
   }
   size--;
  }
 }
 void print() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  for (int i = 0; i < size; i++) {
   cout<<queue[i]<<" <- ";
  }
  cout <<endl;
 }
 //your code goes here
 void add( int newData ) {

     if( size != 0 || size != 100 ) {

          size++; //increment size
          queue[size-1] = newData; //make new element as the last element

      }

}
};
int main() {
 Queue q;
 q.add(42); q.add(2); q.add(8); q.add(1);
 q.print();
 q.remove();
 q.add(128);
 q.print();
 q.remove();
 q.remove();
 q.print();
 return 0;
}*/



/*class Queue {
 int size;
 int* queue;
 public:
 Queue() {
  size = 0;
  queue = new int[100];
 }
 void add(int data) {
  queue[size] = data;
  size++;
 }
 void remove() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  else {
   for (int i = 0; i < size - 1; i++) {
    queue[i] = queue[i + 1];
   }
   size--;
  }
 }
 void print() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  for (int i = 0; i < size; i++) {
   cout<<queue[i]<<" <- ";
  }
  cout << endl;
 }
 //your code goes here
 Queue operator+(Queue &obj) {
        Queue res;
        for(int i=0;i<this->size;i++) {
            res.add(this->queue[i]);
        }
        for(int i=0;i<obj.size;i++) {
            res.add(obj.queue[i]);
        }
        return res;
    }
};
int main() {
 Queue q1;
 q1.add(42); q1.add(2); q1.add(8); q1.add(1);
 Queue q2;
 q2.add(3); q2.add(66); q2.add(128); q2.add(5);
 Queue q3 = q1+q2;
 q3.print();
 return 0;
}*/





/*class Queue {
 public:
 int size;
 int* queue;

 public:
 Queue() {
  size = 0;
  queue = new int[100];
 }
 void add(int data) {
  queue[size] = data;
  size++;
 }
 void remove() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  else {
   for (int i = 0; i < size - 1; i++) {
    queue[i] = queue[i + 1];
   }
   size--;
  }
 }
 void print() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  for (int i = 0; i < size; i++) {
   cout<<queue[i]<<" <- ";
  }
  cout << endl;
 }
 Queue operator+(Queue &obj) {
        Queue res;
        for(int i=0;i<this->size;i++) {
            res.add(this->queue[i]);
        }
        for(int i=0;i<obj.size;i++) {
            res.add(obj.queue[i]);
        }
        return res;
    }
};

//your code goes here
class Queue2: public Queue
{
public:
    Queue2 () {

 };
 void print() {
  if (size == 0) {
   cout << "Queue is empty"<<endl;
   return;
  }
  for (int i = 0; i < size; i++) {
   cout<<queue[i]<<"\n";
  }
  cout << endl;
 }
};


int main() {
 Queue q1;
 q1.add(42); q1.add(2); q1.add(8); q1.add(1);
    q1.print();

 Queue2 q2;
 q2.add(3); q2.add(66); q2.add(128); q2.add(5);q2.add(111);q2.add(77890);
 q2.print();

 return 0;
}*/



template <class T>
class Queue {
    int size;

    T* queue;

    public:
    Queue() {
        size = 0;
        queue = new T[100];
    }
    void add(T data) {
        queue[size] = data;
        size++;
    }
    void remove() {
        if (size == 0) {
            cout << "Queue is empty"<<endl;
            return;
        }
        else {
            for (int i = 0; i < size - 1; i++) {
                queue[i] = queue[i + 1];
            }
            size--;
        }
    }
    void print() {
        if (size == 0) {
            cout << "Queue is empty"<<endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout<<queue[i]<<" <- ";
        }
        cout << endl;
    }
    Queue operator+(Queue &obj) {
        Queue res;
        for(int i=0;i<this->size;i++) {
            res.add(this->queue[i]);
        }
        for(int i=0;i<obj.size;i++) {
            res.add(obj.queue[i]);
        }
        return res;
    }
  };

int main() {
    Queue<int> q1;
    q1.add(42); q1.add(2); q1.add(8); q1.add(1);
    q1.print();

    Queue<string> q2;
    q2.add("Dave"); q2.add("John"); q2.add("Amy");
    q2.print();

    return 0;
}