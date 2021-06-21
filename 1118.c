#include <stdio.h>

int main() {
 int novoCalculo;
 novoCalculo = 1;
 while (novoCalculo == 1)
 {
     double num1, num2, media;
     scanf ("%lf", &num1);
     while ((num1 > 10)||(num1 < 0))
     {
         printf("nota invalida\n");
         scanf ("%lf", &num1);
     }

     scanf ("%lf", &num2);
     while ((num2 > 10)||(num2 < 0))
     {
         printf ("nota invalida\n");
         scanf ("%lf", &num2);
     }

     media = (num1 + num2) /2;
     printf ("media = %.2lf\n", media);

     printf ("novo calculo (1-sim 2-nao)\n");
     scanf ("%d",&novoCalculo);
     while ((novoCalculo<1)||(novoCalculo>2))
     {
        printf ("novo calculo (1-sim 2-nao)\n");
        scanf ("%d",&novoCalculo);
     }
 }
    return 0;
}
