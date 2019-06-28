#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  long long n, factorial = 1;

  scanf("%lld", &n);

  for (int i = 2; i <= n; i++) {
    factorial *= i;
  }

  printf("%lld\n", factorial);
  return 0;
}
