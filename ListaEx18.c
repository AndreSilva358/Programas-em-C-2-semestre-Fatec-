#include <stdio.h>
int main()
{
    int i, n, valor, numA, numB, exp, pot, soma;
    int vetA[9], vetB[9];

    printf ("Indique o numero de algarismos a serem utilizados:\n");
    scanf ("%d", &n);

    printf ("Entre com %d algarismos de 0 a 9\n", n);
    for (i=0;i<n;i++)
    {
        scanf ("%d", &valor);
        vetA[i] = valor;
    }

    printf ("Entre novamente com %d algarismos de 0 a 9\n", n);
    for (i=0;i<n;i++)
    {
        scanf ("%d", &valor);
        vetB[i] = valor;
    }

    numA = 0;
    for (i=0;i<n;i++)
    {
        exp = n-(i+1);
        pot = (int) pow((double) 10,exp);
        numA = numA + (vetA[i]*pot);
    }

    numB = 0;
    for (i=0;i<n;i++)
    {
        exp = n-(i+1);
        pot = (int) pow((double) 10,exp);
        numB = numB + (vetB[i]*pot);
    }

    soma = (numA+numB);
    printf ("A soma dos dois inteiros é: %d\n", soma);
return 0;
}
