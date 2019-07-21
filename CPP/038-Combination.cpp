#include <bits/stdc++.h>
using namespace std;

long fact(int n){
	if(n==1) return 1;
	return n* fact(n-1);
}

int combination(int n, int r){
	return fact(n)/ (fact(n-r) * fact (r));
}

int main(){
	int n, r;
	printf("For nCr, Enter n and r \n");
	scanf("%d %d", &n, &r);
	
	printf("%dC%d is: %d", n, r,combination(n,r));
	
	return 0;
}
