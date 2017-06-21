#include <stdio.h>

int main (void) {
int i = 2, *p;
p = &i;

printf("%d\n",*&i);
printf("%d\n", *p);
return 0;
}

