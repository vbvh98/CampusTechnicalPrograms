#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[] = {4,2,5,97,57,3,6,9,7865,22,9,90};
	int min, smin;
	min = smin = a[0];
	for(int i = 1; i < sizeof(a)/sizeof(a[0]); i++) {
		if(a[i] < min) {
			smin = min;
			min = a[i];
		} else if(smin > a[i]) {
			smin = a[i];
		}
	}
	cout << "Second minimum: " << smin << endl;
	return 0;
}
