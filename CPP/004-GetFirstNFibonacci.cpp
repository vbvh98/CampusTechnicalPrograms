#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  int n, f = 0, s = 1, t;
  scanf("%d", &n);

  printf("%d ", f);
  printf("%d ", s);

  for (int i = 0; i < n - 2; i++) {
    t = f + s;
    f = s;
    s = t;
    printf("%d ", t);
  }

  printf("\n");

  return 0;
}
