#include <bits/stdc++.h>
using namespace std;

bool doSwap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	
	printf("\na: %d, b: %d", a, b);
}

int main() {
  int a, b;
   
  scanf("%d%d", &a, &b);
  
  printf("a: %d, b: %d", a, b);
  
  doSwap(a, b);
  
  return 0;
}
