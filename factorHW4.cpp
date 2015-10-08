#include <iostream> //includes commands accessable to all c++ users
using namespace std;

int main () { //tells the code where to start
  for (int i=1; i<=100; i++) { //counts the i variable from 1 to 100
    for (int n=1; n<=i; n++) { // counts the n variable from 1 to i
      //      cout <<n<< "/" << i << "remainder = "<< i%n <<endl; this statement was used to debug
      int rem = 1; // creates an integer with value =1
      rem = i%n; // sets rem equal to the remainder of i/n. 
      if (rem == 0) { // execues the loop if and only if rem =0. rem equals 0 only if n goes evenly into i, which means it is a factor of i.
	cout << n << ", "; // displays n but does not put a line break at the end
      }
      
    }
    cout << "are factors of "<< i<< endl; // displays i and puts a line break
  }
  return 0; //exits the code
}
