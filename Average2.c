#include <stdio.h>

int main () {
   double num1, num2, num3, MEDIA;

   scanf("%lf %lf %lf", & num1, & num2,& num3);

   MEDIA = (num1/10*2.0) + (num2/10*3.0) + (num3/10*5.0);

   printf ("MEDIA = %.1lf\n", MEDIA);

   return 0;

}
