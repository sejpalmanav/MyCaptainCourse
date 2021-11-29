#include <iostream>
using namespace std;
int fnc(int num) {
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() {
   int num , i;
   cout << "Enter Any number : \n";
   cin >> num;
   for(i = 2; i <= num/2; ++i) {
      if (fnc(i)) {
         if (fnc(num - i)) {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}
