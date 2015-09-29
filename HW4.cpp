#include <iostream> //includes commands that every one has access to
using namespace std;

int main(){ //tells the code where to start running
  double ab = 1;//creates a variable ab that =1, needs to be double because it will end up being very large
  for (int i=0; i<=10; i++) { //for loop that counts every integer from i=0 to i=10
    for (int n=1; n<=i; n++) { //for loop that counts from 1 to i      
      ab *= n;//sets ab = to what ever ab was * n
    }
    cout << i << " factorial is " << ab << endl; // displays ab
    ab = 1; //resets ab back to one so that the new result doesnt get mulltiplied by the old factorial
  }
  return 0; //end code
}


 
