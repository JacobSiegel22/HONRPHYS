#include <iostream> //includes functions available to all users
using namespace std;

int main () { //tells the compiler where to start
  for (int i=1; i<=100; i++) { //for loop that counts from 1 to 100
    for (int n=1; n<=i; n++) { //for loop that counts from 1 to what ever number n that the bigger loop is at (i)
      //      cout <<n<< "/" << i << "remainder = "<< i%n <<endl; <- this code was used to debug
      int rem = 1;// this creates an integer rem
      rem = i%n;//this sets rem equal to the remainder of i / n
      if (rem == 0) {// since rem is only 0 when i divides evenly into n if rem == 0 then n must be a factor of i
	cout << n << "is a factor of " << i << endl; // displays the factors
      }
    }
  }
  return 0; //ends code
}
