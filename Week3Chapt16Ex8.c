#include<stdio.h>

int main(void)
{
struct color {
int red;
int green;
int blue;
}const magenta = {255, 0, 255};

printf("red: %d\n", magenta.red);
printf("green: %d\n", magenta.green);
printf("blue: %d\n", magenta.blue);

return 0;
}
