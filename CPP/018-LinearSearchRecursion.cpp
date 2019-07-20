#include <bits/stdc++.h>
using namespace std;

int _search(int a[], int key, int idx, int len) {
	if(idx >= len) return -1;
	if(a[idx] == key) return idx+1;
	return _search(a, key, idx+1, len);
}

int linearSearch(int a[], int key, int len) {
	return _search(a, key, 0, len);
}

int main(int argc, char* argv[]) {
  int a[] = {1, 2, 3, 5, 4, 6, 7, 8, 10, 9}; 
  int len = 10, key;
  
  for (int i = 0; i < len; i++) cout << a[i] << ", ";
  cout << endl;
  
  cout << "Enter element to search: ";
  cin >> key;
  
  cout << "Element found at position: " << linearSearch(a, key, len) << endl;
  return 0;
}
