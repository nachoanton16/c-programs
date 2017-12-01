#include <stdio.h>
#include <stdlib.h>

int main()
{
	double n1;
	double n2;

	printf("Escriba el primer número: ");
	scanf(" %lf", &n1);
	printf("Escriba el segundo número: ");
	scanf(" %lf", &n2);

	if (n1 == n2)
		printf("%.2lf es igual que %.2lf\n", n1, n2);

	if (n1 > n2)
		printf("%.2lf es mayor que %.2lf\n", n1, n2);

	if (n1 < n2)
		printf("%.2lf es menor que %.2lf\n", n1, n2);



return EXIT_SUCCESS;
}
