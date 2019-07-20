#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int end = 10, key, start=0, mid=0;

  for (int i = 0; i < end; i++) cout << a[i] << ", ";
  cout << endl;

  cout << "Enter element to search: ";
  cin >> key;

  while(start <= end) {
    mid = (start + end) /2;
  	if(a[mid] == key) break;
  	if(a[mid] < key)
  	  start = mid+1;
  	else
  	  end = mid-1;
  }

  cout << "Element found at position: " << mid << endl;

  return 0;
}
