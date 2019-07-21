#include <bits/stdc++.h>
using namespace std;

bool samestr(char *a, char *b){
	bool same = true;
	while(*a || *b){
		same = *a++ == *b++ ? true : false;
		if(!same) break;
	}
	
	return same;
}

int main(){
	char a[100], b[100];
	printf("Enter string 1:");
	gets(a);
	printf("Enter string 2:");
	gets(b);
	
	bool same = samestr(a, b);
	
	
	
	if(same) printf("Same"); 
	else printf("Not same");
}
