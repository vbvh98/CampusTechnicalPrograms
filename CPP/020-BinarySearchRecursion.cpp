#include <bits/stdc++.h>
using namespace std;

int _search(int a[], int key, int start, int mid, int end) {
	if(start > end) return -1;
	if(a[mid] == key) return mid+1;
	if(a[mid] < key) 
	  return _search(a, key, mid+1, (mid+end+1)/2, end);
	else
	  return _search(a, key, start, (mid-1+start)/2, mid-1);
}

int Bsearch(int a[], int key, int len) {
	return _search(a, key, 0, len/2, len);
}

int main(int argc, char* argv[]) {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
  int len = 10, key;
  
  for (int i = 0; i < len; i++) cout << a[i] << ", ";
  cout << endl;
  
  cout << "Enter element to search: ";
  cin >> key;
  
  cout << "Element found at position: " << Bsearch(a, key, len) << endl;
  
  return 0;
}
