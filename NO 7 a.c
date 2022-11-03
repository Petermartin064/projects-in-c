#include<stdio.h>
#include<conio.h>
void main()
{
    int item_code[5000],price[100000],quantity[100];
    float total_cost[100000],net[100000],discount[90000],total_payable,sum = 0;
    int i ,num ,total;

    printf("\nEnter the number of items you want to work with->");
    scanf("%d",&num);

    system("cls");

    for(i = 0; i < num ; i++)
    {
       printf("Enter the item code for item %d : ",i + 1);
       scanf("%d",&item_code[i]);
       printf("\nEnter the quantity->");
       scanf("%d",&quantity[i]);
       printf("\nEnter the price->");
       scanf("%d",&price[i]);

       total_cost[i] = price[i] * quantity[i];
       system("cls");
    }

    printf("\nitem_code\tquantity\tprice\ttotal_cost\tDiscount\tNet");

    for(i = 0; i < num ; i++)
    {
      {

        printf("\n%d",item_code[i]);
        printf("\t\t%d",quantity[i]);
        printf("\t\t%d",price[i]);
        printf("\t%.1f",total_cost[i]);
      }
      if(total_cost[i] > 20000)
      {
          discount[i] = total_cost[i] * 14.0/100;
      }
      else if( total_cost[i] > 10000 && total_cost[i] <= 20000)
      {
          discount[i] = total_cost[i] * 10.0/100;
      }
      else
        discount[i] == 0;

      printf("\t\t%.1f",discount[i]);

      net[i] = total_cost[i] - discount[i];

      printf("\t\t%.1f",net[i]);

       sum = sum + net[i];
    }
    printf("\n\n\tThe total amount payable is %.2f",sum);

getch();
}
