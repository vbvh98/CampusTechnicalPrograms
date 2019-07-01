#include <bits/stdc++.h>
using namespace std;

bool isPrime(int N) {
  if( N < 2 || N % 2 == 0 ) return false;
  if( N == 2 ) return true;
  for(int i = 3; i <= (int)sqrt(N) ; i+=2 ) 
    if(N % i == 0) return false;
  return true;
}

int main() {
  int number;
   
  scanf("%d", &number);
  
  printf(isPrime(number) ? "Prime" : "Not Prime");
  
  return 0;
}
