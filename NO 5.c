#include<stdio.h>

int get_power(int number,int power);
void main()
{
    int num,pow,conv;

    printf("\nEnter a number->");
    scanf("%d", &num);
    printf("\nEnter the power->");
    scanf("%d", &pow);

    conv = get_power(num,pow);

    printf("\n%d  to power %d is  %d",num,pow,conv);
}
int get_power(int number,int power)
{
    int j ,multiplier = 1;
    for(j = 1; j <= power;j++)
    {
        multiplier *= number;
    }
    return(multiplier);
}
