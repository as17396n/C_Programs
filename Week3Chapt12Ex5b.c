#include <stdio.h>

int main(void){
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p;
p = a;

if(p == &a[0])
printf("True \n");
else
printf("False \n");

return 0;
}
