#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  int a, b, temp;

  scanf("%d %d", &a, &b);

  while (b) {
    temp = b;
    b = a % b;
    a = temp;
  }

  printf("GCD: %d\n", a);

  return 0;
}
