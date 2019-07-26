#include <bits/stdc++.h>
using namespace std;

int* findUnique(int *a, int n) {
	int *b = (int *) malloc(n*sizeof(int)), k = 0;
	for(int i = 0; i < n; i++) {
		int add = 1;
		for(int j = 0 ; j < k; j++) {
			if(b[j] == a[i]) {
				add = 0;
				break;
			}
		}
		if(add) b[k++] = a[i];
	}
	return b;
}

int main() {
	int *a;
	int n;
	cin >> n;
	a = (int *) malloc(n*sizeof(int));

	for(int i = 0; i < n; i++) {
		cin >> *(a+i);
	}

	a = findUnique(a, n);

	for(int i = 0; i < n; i++) {
		cout << *(a+i) << ", ";
	}
	cout << endl;
	
	return 0;
}
