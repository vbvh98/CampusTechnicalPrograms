#include <stdio.h>
using namespace std;

int length(char *a){
	int b=0;
	while(*a){
		b++;
		a++;
	}
	return b;
}

int main(){
	char a[100], b[100];
	printf("Enter a string: \n");
	scanf("%s", a);
	
	printf("Length of %s is %d", a, length(a));
	
	return 0;
}
