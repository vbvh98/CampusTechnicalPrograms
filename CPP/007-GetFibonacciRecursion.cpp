#include <bits/stdc++.h>
using namespace std;

int getFibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main(int argc, char* argv[]) {
  int n;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) printf("%d, ", getFibonacci(i));
  printf("\n");
  return 0;
}
