#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	int prod=0;
	printf("For m x n, Enter m and n \n");
	scanf("%d %d", &m, &n);
	
	do{
		prod+= m;
	}while(--n);
	
	printf("m x n is: %d", prod);
	
	return 0;
}
