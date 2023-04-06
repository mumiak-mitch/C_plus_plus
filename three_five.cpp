#include <bits/stdc++.h>
using namespace std;
void findMultiplesOf3And5(int n) {
   int threeMultiple = 3;
   int fiveMultiple = 5;
   for (
int i = 1; i <= n; i++) {
      bool _3 = false, _5 = false;
      if (i == threeMultiple) {
         threeMultiple += 3;
         _3 = true;
      }
      if (i == fiveMultiple) {
         fiveMultiple += 5;
         _5 = true;
      }
      if (_3 && _5) {
         cout << "Multiple of both 3 and 5" << endl;
      }else if (_3) {
         cout << "Multiple of 3" << endl;
      }else if (_5) {
         cout << "Multiple of 5" << endl;
      }else {
         cout << i << endl;
      }
   }
}
int main() {
   findMultiplesOf3And5(100);
   return 0;
}