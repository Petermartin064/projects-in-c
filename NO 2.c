#include<stdio.h>
int main()
{
	int i, j;
	i = 1;
	do
	{
		j = 1;
		do
		{
			if(i <= 7 - j)
				printf(" ");
			else
				printf(" *");
			j++;
		}while(j <= 7);
		
		printf("\n");
		i++;
		
	}while(i <= 7);
	return 0;
}
