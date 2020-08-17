#include <stdio.h>
int main(void)
{
    float base,high,area;
    printf("Enter the base : ");
    scanf("%f",&base);
    printf("Enter the high : ");
    scanf("%f",&high);
    area=0.5*base*high;
    printf("Triangle area is : %.2f\n",area);
    return 0;
}