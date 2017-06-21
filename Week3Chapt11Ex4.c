#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
int i, j;
printf("Enter Value for i: ");
scanf("%d", &i);
printf("Enter Value for j: ");
scanf("%d", &j);
 
swap(&i, &j);

printf("After Swap Value of i: %d\n", i);
printf("After Swap Value of j: %d\n", j);

return 0;
}

void swap(int *p, int *q)
{
int temp = *p;
*p = *q;
*q = temp;

}
