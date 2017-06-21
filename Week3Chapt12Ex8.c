#include <stdio.h>
#define N 8

void store_zeros(int *a, int n);

int main(void)
{
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int b;

store_zeros(&b, N);

for (int i = 0; i < N; i++)
printf("%d\n", a[i]);

return 0;
}


void store_zeros(int *a, int n)
{
int *p;

for (p = a; p < a + N; p++)
*p = 0;

}
