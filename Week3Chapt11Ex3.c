#include <stdio.h>
#define N 4

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
double b[N], average, addition;
int i;
printf ("Enter %d Numbers: ", N);

for(i = 0; i < N; i++)
scanf("%lf", &b[i]);

avg_sum(b, N, &average, &addition);
printf("The Addition is: %.2lf\n", addition);
printf("The Average is: %.2lf\n", average);

return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
int i;

*sum = 0.0;
for(i = 0; i < n; i++){

*sum += a[i];
*avg = *sum/n;

}
}
