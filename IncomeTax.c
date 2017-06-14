#include <stdio.h>
int main(void)
{
int income;
printf("Enter Income:");
scanf("%d", &income);
if(income <= 750)
printf("Tax Due: %.2f\n", (1.0f/100.0f) * income);
else if(income > 750 && income <= 2250)
printf("Tax Due: %.2f\n", (7.50f) + (2.0f/100.0f) * income);
else if(income > 2250 && income <= 3750)
printf("Tax Due: %.2f\n", (37.50f) + (3.0f/100.0f) * income);
else if(income > 3750 && income <= 5250)
printf("Tax Due: %.2f\n", (82.50f) + (4.0f/100.0f) * income);
else if(income > 5250 && income <= 7000)
printf("Tax Due: %.2f\n", (142.50f) + (5.0f/100.0f) * income);
else if(income > 7000)
printf("Tax Due: %.2f\n", (230.00f) + (6.0f/100.0f) * income);
else
printf("Amount not eligible for Tax Payment");

return 0;
}
