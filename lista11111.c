#include <stdio.h>

int main() {
  int n, i, v[10];

  printf("entre uma sequencia com numeros inteiros: \n");
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for (i = n-1; i >= 0; i--)
    printf("%d ", v[i]);
  printf("\n");
  return 0;
}
