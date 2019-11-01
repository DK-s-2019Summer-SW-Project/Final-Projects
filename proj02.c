// 휴대 전화를 이용하여 메모할 내용을 작성하거나 문자 메세지를 보낼 때
//숫자번호판을 이용하여 작성
// getch만드는 법을 모르겠다. 그냥 scanf로 만들어보자

#include<stdio.h>
#include<conio.h>
#define _CRT_SECURE_NO_WARNNINGS
int main()
{
	int i, total;
	printf("please insert the number: ");
	scanf_s("%d", &i);

		if (i == 1)
		{
			printf("a\n");
		}
		else if (i == 11)
		{
			printf("b\n");
		}
		else if (i == 111)
		{
			printf("c\n");
		}
		else
			printf("the input is wrong");

	return 0;
}

// switch case 문을 이용하여 문장을 작성 scanf 대신데 getch를 사용하라고 하는데 이건 검색이 필요 --> 그냥 if문을 만들어도 될 것 같은데?
// 그냥 예를 들어서 1을 입력하면 a 11을 입력하면b가 나오게 하면 된다. 그러면 선언을 엄청나게 해야 하는데..
// 그냥 입력이 한번이면a 입력이 2번이면 b이런 식으로 문장을 만들면 간단하게 될것 같지만..
// 일단 입력을 요하는 변수, for문을 활용해서 입력 횟수를 만들어도 될 것 같다. 예를 들어 for(i = 0; i<3; i++)식으로 만들면 되나..?
// 일단 입력을 받고 출력을 하는 문장을 만들고 그것이 getch로 돌아가는지 부터 만들어보자 --> 입력을 받으려면 배열이 필요 할듯?

