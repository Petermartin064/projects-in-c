#include <stdio.h>
void main()
{
    int i, j, a, num, number[30];

    printf("Enter the numbers you want to enter -> ");
    scanf("%d", &num);

  printf("\nEnter the numbers : ");
  for (i = 0; i < num; ++i)
   {
    scanf("%d", &number[i]);
   }
   printf("\n\tThe initial array is :");
    for(i = 0; i < num;i++)
    {
        printf("%3d",number[i]);
    }

     for (i = 0; i < num; ++i)
   {
      for (j = i + 1; j < num; ++j)
     {
       if (number[i] > number[j])
        {
          a =  number[i];
          number[i] = number[j];
          number[j] = a;

        }

     }
  }
  printf("\n\tThe numbers arranged in ascending order are :");
    for (i = 0; i < num; ++i)
    {
      printf("%d ", number[i]);
    }
printf("\n\n");
}
