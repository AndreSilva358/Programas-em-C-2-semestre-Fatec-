#include <stdio.h>

int main() {
  double num1, num2, MEDIA;
  scanf ("%lf %lf", & num1, & num2 );

  MEDIA = (num1*3.5 + num2*7.5) / 11.0;

  printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}
