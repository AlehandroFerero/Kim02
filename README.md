# Kim02
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
int n, sum;
int *m;
float avg;
printf("Введите кол-во предметов: ");
scanf("%d", &n);

m = (int*) malloc(n*sizeof(int));

for (int j=0;j<n;j++)
{
m[j] = rand() % 5 + 2;
sum += m[j];
}
avg = (float)sum / (float)n;
printf("avg = %.2f \n", avg);
if (avg < 4.6)
printf("Ваш средний балл ниже проходного :( ");
else
printf("Ваш средний балл выше проходного :) ");

free (m);
return 0;
}
