#include<stdio.h>
#include<ctype.h>
void main()
{
    char str[50];
    int count;

    printf("\nEnter the string to be converted->");
    scanf("%[^\n]s",str);

    printf("\n\tThe proper way of write your name is  : ");

     for(count = 0; str[count]!= '\0'; count++)
     {
         str[count] = tolower(str[count]);

         if(count == 0)
         {
             str[count] = toupper(str[count]);
         }
         if(str[count] == ' ')
         {
             printf(" ");
             count += 1;
             str[count] = toupper(str[count]);
         }
         printf("%c",str[count]);
     }
        printf("\n");
}

