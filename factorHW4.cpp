#include <iostream>
using namespace std;

int main () {
  for (int i=1; i<=100; i++) {
    for (int n=1; n<=i; n++) {
      //      cout <<n<< "/" << i << "remainder = "<< i%n <<endl;
      int rem = 1;
      rem = i%n;
      if (rem == 0) {
	cout << n << "is a factor of " << i << endl;
      }
    }
  }
  return 0;
}
