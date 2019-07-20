#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  
  cout << "Enter Year: ";
  int year;
  cin >> year;
  
  if(year%4 != 0) cout << "Not A leap year." << endl;
  else if(year%100 != 0) cout << "A leap year." << endl;
  else if(year%400 != 0) cout << "Not A leap year." << endl;
  else cout << "A leap year." << endl;
  
  return 0;
}
