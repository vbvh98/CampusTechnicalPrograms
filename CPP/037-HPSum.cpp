#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; double sum=0;
	printf("Enter a number: \n");
	scanf("%d", &a);
	
	while(a>1){
		sum += ((double)1/a); 
		a--;
	}
	
	printf("1+1/2+1/3+1/4+... to n terms is: %f", sum);
	
	return 0;
}
