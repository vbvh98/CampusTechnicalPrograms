#include <bits/stdc++.h>
using namespace std;

int main() {
	int *a;
	int n, pos;
	cin >> n;
	n++;
	a = (int *) malloc(n*sizeof(int));

	for(int i = 0; i < n-1; i++) {
		cin >> *(a+i);
	}

	cin >> pos;
	int ele; cin >> ele;
	for(int i = n-1; i >=pos; i--) {
		a[i] = a[i-1];
	}
	a[pos-1] = ele;

	for(int i = 0; i < n; i++) {
		cout << *(a+i) << ", ";
	}
	cout << endl;
	
	return 0;
}
