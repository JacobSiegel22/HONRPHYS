#include <iostream>
using namespace std;

int main () {
  double* p1 = new double(3.14);
  double* p2 = p1;
  cout << "the adress of *p1 is " <<p1 << "the value of *p1 is "<< *p1<< endl;
  cout << "the adress of *p2 is "<< p2 << "the value if *p2 is " <<*p2<<endl;
  *p1 = *p1 *2;
  cout <<"*p1 is " <<*p1<<endl;
  cout <<"*p2 is "<<*p2<<endl;
  return 0;
}
