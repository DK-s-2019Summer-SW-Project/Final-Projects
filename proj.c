#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#include<stdlib.h> // 난수를 사용하기 위한 배열
#include<time.h>
int flage[10];
int main()
{
	int user = 0, total = 0, i, sum = 0, computer = 0;
	srand(time(NULL));
	while (total < 100)
	{
		for (i = 0; i < 10; i++)
		{
			printf("insert fo the user: ");
			scanf_s("%d", &user);
			computer = rand() % 10 + 1;
			if (flage[computer])
				continue;
			printf("insert of the computer: %d\n", computer);
			flage[computer] = 10;
			sum = user + computer;
			total += sum;
			printf("the sum is %d\n", sum);
			printf("the toal is %d\n", total);
		}
		printf("the winner is ");
	}

	return 0;
}


