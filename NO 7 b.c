#include<stdio.h>
struct Item
{
    int item_code[5000],price[100000],quantity[100],total_cost[100000],net[100000],discount[90000],total_payable[10000],total;
};
void main()
{
    struct Item   it1;
    int num ,sum = 0, i ;



     printf("\nEnter the number of items you want to work with->");
    scanf("%d",&num);

    system("cls");

    for(i = 0; i < num ; i++)
    {
       printf("Enter the item code for item %d : ",i + 1);
       scanf("%d",&it1.item_code[i]);
       printf("\nEnter the quantity->");
       scanf("%d",&it1.quantity[i]);
       printf("\nEnter the price->");
       scanf("%d",&it1.price[i]);

       it1.total_cost[i] = it1.price[i] * it1.quantity[i];
       system("cls");
    }

    printf("\nitem_code\tquantity\tprice\ttotal_cost\tDiscount\tNet");

    for(i = 0; i < num ; i++)
    {
      {

        printf("\n%d",it1.item_code[i]);
        printf("\t\t%d",it1.quantity[i]);
        printf("\t\t%d",it1.price[i]);
        printf("\t%d",it1.total_cost[i]);
      }
      if(it1.total_cost[i] > 20000)
      {
          it1.discount[i] = it1.total_cost[i] * 14.0/100;
      }
      else if( it1.total_cost[i] > 10000 && it1.total_cost[i] <= 20000)
      {
          it1.discount[i] = it1.total_cost[i] * 10.0/100;
      }
      else
        it1.discount[i] == 0;

      printf("\t\t%d",it1.discount[i]);

      it1.net[i] = it1.total_cost[i] - it1.discount[i];

      printf("\t\t%d",it1.net[i]);

       sum = sum  + it1.net[i];
    }
    printf("\n\n\tThe total amount payable is %d",sum);

}
