#include <stdio.h>

int main(void){
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1], *q = &a[5];
printf("%d\n", *(p + 3));
printf("%d\n", *(q - 3));
printf("%ld\n", (q - p));

if(p < q)
printf("True\n");
else
printf("false\n");

if(*p < *q)
printf("True\n");
else
printf("false\n");
return 0;
}

