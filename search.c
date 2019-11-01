#include <stdio.h>
#pragma warning (disable:4996)

void search()
{
	int a;
	printf("1.위치 2.재고 현황 3.");
	scanf_s("%d", &a);

	if (a == 1)
	{
		printf("The location of the product is: \n");
	}
	else if (a == 2)
	{
		printf("The status of the product is: \n");
	}
	else if (a == 3)
	{
		printf("exit");
	}
	else
	{
		printf("wrong input\n");
	}
	
}


int main()
{
	search();


	return 0;
}