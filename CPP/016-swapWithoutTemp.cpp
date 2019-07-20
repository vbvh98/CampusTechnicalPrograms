#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  
  double a, b;
  cout << "Enter 2 numric values: ";
  cin >> a >> b;
  
  cout << "initial: a=" << a << ", b=" << b << endl;
  
  a = a+b;
  b = a-b;
  a = a-b;
  
  cout << "swaped: a=" << a << ", b=" << b << endl;
  
  return 0;
}
