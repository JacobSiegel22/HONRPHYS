#include <iostream> //includes commands that every one has access to
using namespace std;

int main(){ //tells the code where to start running
  double ab = 1;
  for (int i=0; i<=10; i++) { //for loop that counts every integer from i=0 to i=10
    for (int n=1; n<=i; n++) { //for loop that counts from 1 to i      
      ab *= n;
    }
    cout << i << " factorial is " << ab << endl;
    ab = 1;
  }
  return 0;
}


 
