#include <stdio.h>

void printar(int n) {
  if(n > 0)
    printar(n - 1);
  printf("%d ", n);
}  

int main() {
  int n;
  scanf("%d", &n);
  printar(n);

  return 0;
}