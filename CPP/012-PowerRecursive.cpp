#include <bits/stdc++.h>
using namespace std;

int calcPower(int a, int b) {
	if(b == 1) return a;
	return a*calcPower(a, b-1);
}

int main() {
  int a, b;
   
  scanf("%d%d", &a, &b);
  
  int c = calcPower(a, b);
  
  printf("%d", c);
  
  return 0;
}
