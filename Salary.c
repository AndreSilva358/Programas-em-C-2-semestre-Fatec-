#include <stdio.h>

int main () {
   int NUMBER, hours;
   float VPH, SALARY;

   scanf("%d %d %f", &NUMBER, &hours, &VPH);

   SALARY = hours * VPH;

   printf("NUMBER = %d\n", NUMBER);

   printf("SALARY = U$ %0.2f\n", SALARY);

   return 0;

}
