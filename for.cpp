#include <iostream>
using namespace std;

int main() {
  for (int i=0; i<10; i++) {
    cout<< "i is " <<i<<": "<<endl;
   int  m=0;
   for (m; m<=i; m++) {
     cout <<m;
   }
   cout << endl;
  }
  return 0;
}
