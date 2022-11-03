#include<stdio.h>
#include<conio.h>
int square(int integer),square_root(int integer),cube_root(int integer);
void main()
{
    int num,sq,squar_t,cube_rt;

    printf("Enter a integer->");
    scanf("%d",&num);

    sq = square(num);
    squar_t = square_root(num);
    cube_rt = cube_root(num);

    printf("%d squared is %d",num,sq);
    if(squar_t == 0)
    {
        printf("\nThe square root of %d is not an integer.",num);
    }
    else
        printf("\nThe square_root of %d is %d",num,squar_t);

    if(cube_rt == 0)
    {
        printf("\nThe cube_root of %d is not an integer.",num);
    }
    else
    {
        printf("\nThe cube_root of %d is %d",num,cube_rt);
    }
    getch();
}
int square(int integer)
{
    int product;

    product = integer * integer;

    return(product);
}
int square_root(int integer)
{
    int calc,count;
     for(count = 1; count <= integer / 2; count++)
     {
         if(integer == count  * count )
         {
           return(count);
         }
         else if(count * count > integer )
            return 0;
     }
}
int cube_root(int integer)
{
    int cube,count;

    for(count = 1; count <= integer / 3; count++)
    {
        if(integer == count * count * count)
        {
            return(count);
        }
        else if(count * count * count > integer)
            return 0;
    }
}


