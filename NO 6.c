#include<stdio.h>
#include<conio.h>

void main()
{
    int deposit,rate,year,target_amount;
    float profit,compounded_amount;

    printf("Enter your deposit->");
    scanf("%d",&deposit);
    printf("\nEnter the interest_rate->");
    scanf("%d",&rate);
    printf("\nEnter your target amount ->");
    scanf("%d",&target_amount);

    {
        for(year = 1; year != 0;year++)
        {
            if(year == 1)
            {
                profit = deposit * rate / 100.0;
                compounded_amount = deposit + profit;
            }
            else
            {
                profit = rate/100.0 * compounded_amount;
                compounded_amount += profit;
            }
            if(compounded_amount >= target_amount)
                goto ending;
        }
        printf("\n");
    }

ending:
    printf("\nIt will take %d years for your amount to reach your target",year);
    printf("\nBy the end of the period the amount in your period will be %f",compounded_amount);

    getch();
}
