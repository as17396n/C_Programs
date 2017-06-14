#include <stdio.h>
int main(void)
{
#define pi 3.14
int radius = 10;
float volume = (4.0f/3.0f)*pi*radius*radius*radius;
printf("The Volume of the sphere is: %.2f\n" , volume);

return 0;
}
