#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int get_even(int number);

void main()
{
    int arr[500],j,num[500],even,odd,digit,set;
    int sum_even,sum_odd;
    even = odd = sum_even = sum_odd = 0;

    printf("\nEnter the number of sample trials you want to use->");
    scanf("%d",&set);

    system("cls");
    for (j = 0; j < set; j++)
    {
     printf("\nEnter the integer %d -> ",j + 1);
     scanf("%d",&num[j]);
    }

    for (j = 0; j < set; j++)
    {
        digit = get_even(num[j]);
        if(digit == 1)
        {
            printf("\n%d is an even number",num[j]);
            even++;
            sum_even += num[j];
        }
        else if(digit == 0)
        {
            printf("\n%d is an odd number",num[j]);
            sum_odd += num[j];
            odd++;
        }
        printf("\n\n");
    }
    printf("\nThere is a total of %d even numbers and their sum is %d",even,sum_even);
    printf("\nThere is a total of %d odd numbers and their sum is %d",odd,sum_odd);

    getch();
}
int get_even(int number)
{
    if(number %2 == 0 )
    {
        return (1);
    }
    else
        return (0);
}
