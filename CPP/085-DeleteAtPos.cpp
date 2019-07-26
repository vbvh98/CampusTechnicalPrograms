#include <bits/stdc++.h>
using namespace std;

int main() {
	int *a;
	int n, pos;
	cin >> n;
	a = (int *) malloc(n*sizeof(int));

	for(int i = 0; i < n; i++) {
		cin >> *(a+i);
	}

	cin >> pos;
	for(int i = n-1; i >=pos; i--) {
		a[i-1] = a[i];
	}
	n--;

	for(int i = 0; i < n; i++) {
		cout << *(a+i) << ", ";
	}
	cout << endl;
	
	return 0;
}
