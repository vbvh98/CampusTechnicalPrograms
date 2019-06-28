#include <bits/stdc++.h>
using namespace std;

long long getFactorial(long long N) {
  if (N == 2) return 2;
  return N * getFactorial(N - 1);
}

int main(int argc, char* argv[]) {
  long long n, factorial = 1;

  scanf("%lld", &n);

  factorial = getFactorial(n);

  printf("%lld\n", factorial);
  return 0;
}
