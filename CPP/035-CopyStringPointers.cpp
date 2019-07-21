#include <stdio.h>
using namespace std;

void copystr(char *a, char *b){
	while(*a){
		*b=*a;
		b++;
		a++;
		*b = '\0';
	}
}

int main(){
	char a[100], b[100];
	printf("Enter a string: \n");
	scanf("%s", a);
	
	copystr(a,b);
	
	printf("Copied string is: %s", b);
	return 0;
}
