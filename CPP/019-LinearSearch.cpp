#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  
  int a[] = {1, 2, 3, 5, 4, 6, 7, 8, 10, 9}; 
  int len = 10, key;
  
  for (int i = 0; i < len; i++) cout << a[i] << ", ";
  cout << endl;
  
  cout << "Enter element to search: ";
  cin >> key;
  
  for(int i = 0; i < len; i++) {
  	if(key == a[i]) cout << "element found at position: " << i+1 << endl, exit(0);
  }
  
  cout << "Element not found!" << endl;
  
  return 0;
}
