
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void troca(int a, int b);

int main()
{
int valor1 = 12;
int valor2 = 345;
printf("Valor 1 = %d\nValor 2 = %d\n", valor1, valor2);
troca(valor1, valor2);
printf("Valor 1 = %d\nValor 2 = %d\n", valor1, valor2);
return 0;
}

void troca(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
}
