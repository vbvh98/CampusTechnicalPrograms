#include <iostream>
using namespace std;

int max(int a[]){
	int max = a[0];
	
	for(int i=0; i< 10; ++i){
		max  = max > a[i] ? max : a[i];
	}
	
	return max;
}

int main(){
	int a[10] = {4,9,10,15,2,13,18,2,6,12};
	
	cout << max(a);
	return 0;
}
