#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning (disable:4996)

static int bread = 500, chocolate = 500, drink = 500, icecream = 500, snack = 500;
static int tibread = 0, tichocolate = 0, tidrink = 0, tiicecream = 0, tisnack = 0;
static int tobread = 0, tochocolate = 0, todrink = 0, toicecream = 0, tosnack = 0;

typedef struct node
{
	char product[500];
	struct node*next;
} node;

typedef struct Linkedlist
{
	struct node*head;
	struct node*tail;
} list;

void printnode(struct node*node)
{
	FILE* mart;
	mart = fopen("mart.txt", "w");

	if (mart == NULL) {
		fprintf(stderr, "파일을 생성 할 수 없습니다.\n");
		exit(1);
	}

	fprintf(mart, "과자의 총출고량 :  %d\n", tosnack);
	fprintf(mart, "아이스크림의 총출고량 :  %d\n", toicecream);
	fprintf(mart, "빵의 총출고량 :  %d\n", tobread);
	fprintf(mart, "초콜릿의 총출고량 :  %d\n", tochocolate);
	fprintf(mart, "음료수의 총출고량 :  %d\n\n\n", todrink);

	fprintf(mart, "과자의 총입고량 :  %d\n", tisnack);
	fprintf(mart, "아이스크림의 총입고량 : %d\n", tiicecream);
	fprintf(mart, "빵의 총입고량 :  %d\n", tibread);
	fprintf(mart, "초콜릿의 총입고량 :  %d\n", tichocolate);
	fprintf(mart, "음료수의 총입고량 :  %d\n\n\n", tidrink);

	fprintf(mart, "과자 잔여량 : %d\n", snack);
	fprintf(mart, "아이스크림 잔여량 : %d\n", icecream);
	fprintf(mart, "빵 잔여량 : %d\n", bread);
	fprintf(mart, "초콜릿 잔여량 : %d\n", chocolate);
	fprintf(mart, "음료수 잔여량 : %d\n\n\n", drink);
	fclose(mart);


}

void newnode(struct Linkedlist*list)
{
	struct node*newnode = (struct node*)malloc(sizeof(struct node));
	if (list->head == NULL && list->tail == NULL)
	{
		list->head = newnode;
		list->tail = newnode;
	}
	else
	{
		list->tail->next = newnode;
		list->tail = newnode;
	}
}

void in() {
	srand(time(NULL));
	int i;
	int insnack, inicecream, inbread, inchocolate, indrink;

	do {
		printf("===============================================================\n\n");
		printf("1. 과자\n2. 아이스크림\n3. 빵\n4. 초콜릿\n5. 음료수\n6. 이전메뉴\n\n");
		printf("무슨 물품을 입고하시겠습니까?\n\n");
		scanf("%d", &i);
		printf("\n");
		switch (i) {
		case 1:
			printf("===============================================================\n\n");
			if (snack == 500) {
				printf("★★★과자 창고가 꽉 찼습니다.★★★\n\n");
			}
			else {
				printf("과자는 %d개를 넣을 수 있습니다.\n\n", 500 - snack);
				printf("과자를 몇 개 입고하시겠습니까? : ");
				scanf("%d", &insnack);
				printf("\n");
				if (insnack > 500 - snack) {
					printf("===============================================================\n\n");
					printf("%d개 이하만 입고할 수 있습니다.\n\n", 500 - snack);

				}

				else {
					printf("===============================================================\n\n");
					snack += insnack;
					tisnack += insnack;
					printf("★★★과자가 %d개 입고되었습니다.★★★\n\n", insnack);
				}
			}
			break;
		case 2:
			printf("===============================================================\n\n");
			if (icecream == 500) {
				printf("★★★아이스크림 창고가 꽉 찼습니다.★★★\n\n");
			}
			else {
				printf("아이스크림은 %d개 넣을 수 있습니다.\n\n", 500 - icecream);
				printf("아이스크림을 몇 개 입고하시겠습니까? :  ");
				scanf("%d", &inicecream);
				printf("\n");
				if (inicecream > 500 - icecream) {
					printf("===============================================================\n\n");
					printf("%d개 이하만 입고할 수 있습니다.\n\n", 500 - icecream);
				}
				else {
					printf("===============================================================\n\n");
					icecream += inicecream;
					tiicecream += inicecream;
					printf("★★★아이스크림이 %d개 입고되었습니다.★★★\n\n", inicecream);
				}
			}
			break;
		case 3:
			printf("===============================================================\n\n");
			if (bread == 500) {
				printf("★★★빵 창고가 꽉 찼습니다.★★★\n\n");
			}
			else {
				printf("빵은 %d개 넣을 수 있습니다.\n\n", 500 - bread);
				printf("빵을 몇 개 입고하시겠습니까? : ");
				scanf("%d", &inbread);
				printf("\n");


				if (inbread > 500 - bread) {
					printf("===============================================================\n\n");
					printf("%d개 이하만 입고할 수 있습니다.\n\n", 500 - bread);
				}
				else {
					printf("===============================================================\n\n");
					bread += inbread;
					tibread += inbread;
					printf("★★★빵이 %d개 입고되었습니다.★★★\n\n", inbread);
				}
			}
			break;
		case 4:
			printf("===============================================================\n\n");
			if (chocolate == 500) {
				printf("★★★초콜릿 창고가 꽉 찼습니다.★★★\n\n");
			}
			else {
				printf("초콜릿은 %d개 넣을 수 있습니다.\n\n", 500 - chocolate);
				printf("초콜릿을 몇 개 입고하시겠습니까? : ");
				scanf("%d", &inchocolate);
				printf("\n");
				if (inchocolate > 500 - chocolate) {
					printf("===============================================================\n\n");
					printf("%d개 이하만 입고할 수 있습니다.\n\n", 500 - chocolate);
				}
				else {
					printf("===============================================================\n\n");
					chocolate += inchocolate;
					tichocolate += inchocolate;
					printf("★★★초콜릿이 %d개 입고되었습니다.★★★\n\n", inchocolate);
				}
			}
			break;
		case 5:
			printf("===============================================================\n\n");
			if (drink == 500) {
				printf("★★★음료수 창고가 꽉 찼습니다.★★★\n\n");
			}
			else {
				printf("음료수는 %d개 넣을 수 있습니다.\n\n", 500 - drink);
				printf("음료수를 몇 개 입고하시겠습니까? : ");
				scanf("%d", &indrink);
				printf("\n");
				if (indrink > 500 - drink) {
					printf("===============================================================\n\n");
					printf("%d개 이하만 입고할 수 있습니다.\n\n", 500 - drink);
				}
				else {
					printf("===============================================================\n\n");
					drink += indrink;
					tidrink += indrink;
					printf("★★★음료수가 %d개 입고되었습니다.★★★\n\n", indrink);
				}
			}
			break;

		case 6:
			break;
		default:
			printf("===============================================================\n\n");
			printf("올바른 메뉴를 입력해주세요.\n\n");
			break;

		}
	} while (i != 6);


}

void out() {
	srand((unsigned int)time(NULL));

	int outbread = rand() % 50;
	int outchocolate = rand() % 50;
	int outdrink = rand() % 50;
	int outicecream = rand() % 50;
	int outsnack = rand() % 50;
	if (snack == 0 && icecream == 0 && bread == 0 && chocolate == 0 && drink == 0) {
		printf("창고가 비었습니다.\n\n");
	}
	else {
		if (snack < outsnack) {
			outsnack = snack;
		}
		if (icecream < outicecream) {
			outicecream = icecream;
		}
		if (bread < outbread) {
			outbread = bread;
		}
		if (chocolate < outchocolate) {
			outchocolate = chocolate;
		}
		if (drink < outdrink) {
			outdrink = drink;
		}
		bread -= outbread;
		chocolate -= outchocolate;
		drink -= outdrink;
		icecream -= outicecream;
		snack -= outsnack;

		tobread += outbread;
		tochocolate += outchocolate;
		todrink += outdrink;
		toicecream += outicecream;
		tosnack += outsnack;

		printf("과자의 출고량 :  %d\n", outsnack);
		printf("아이스크림의 출고량 :  %d\n", outicecream);
		printf("빵의 출고량 :  %d\n", outbread);
		printf("초콜릿의 출고량 :  %d\n", outchocolate);
		printf("음료수의 출고량 :  %d\n\n\n", outdrink);

		printf("과자 잔여량 : %d\n", snack);
		printf("아이스크림 잔여량 : %d\n", icecream);
		printf("빵 잔여량 : %d\n", bread);
		printf("초콜릿 잔여량 : %d\n", chocolate);
		printf("음료수 잔여량 : %d\n\n\n", drink);
	}
}

void situation() {

	printf("과자의 총출고량 :  %d\n", tosnack);
	printf("아이스크림의 총출고량 :  %d\n", toicecream);
	printf("빵의 총출고량 :  %d\n", tobread);
	printf("초콜릿의 총출고량 :  %d\n", tochocolate);
	printf("음료수의 총출고량 :  %d\n\n\n", todrink);

	printf("과자의 총입고량 :  %d\n", tisnack);
	printf("아이스크림의 총입고량 : %d\n", tiicecream);
	printf("빵의 총입고량 :  %d\n", tibread);
	printf("초콜릿의 총입고량 :  %d\n", tichocolate);
	printf("음료수의 총입고량 :  %d\n\n\n", tidrink);

	printf("과자 잔여량 : %d\n", snack);
	printf("아이스크림 잔여량 : %d\n", icecream);
	printf("빵 잔여량 : %d\n", bread);
	printf("초콜릿 잔여량 : %d\n", chocolate);
	printf("음료수 잔여량 : %d\n\n\n", drink);

	if (tosnack > toicecream && tosnack > tobread && tosnack > tochocolate && tosnack > todrink)
		printf("★★★과자의 판매율이 가장 높습니다.★★★\n\n");
	else if (toicecream > tosnack && toicecream > tobread && toicecream > tochocolate && toicecream > todrink)
		printf("★★★아이스크림의 판매율이 가장 높습니다.★★★\n\n");
	else if (tobread > tosnack && tobread > toicecream && tobread > tochocolate && tobread > todrink)
		printf("★★★빵의 판매율이 가장 높습니다.★★★\n\n");
	else if (tochocolate > tosnack && tochocolate > toicecream && tochocolate > tobread && tochocolate > todrink)
		printf("★★★초콜릿의 판매율이 가장 높습니다.★★★\n\n");
	else if (todrink > tosnack && todrink > toicecream && todrink > tobread && todrink > tochocolate)
		printf("★★★음료수의 판매율이 가장 높습니다.★★★\n\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("                                       ==========\n");
	printf("                                      ∥매    지∥\n");
	printf("                                      ∥        ∥\n");
	printf("                                      ∥마    트∥\n");
	printf("                                       ==========\n\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}


void file()
{
	FILE* mart;
	mart = fopen("mart.txt", "w");

	int menu;
	struct Linkedlist* list = (struct Linkedlist*)malloc(sizeof(struct Linkedlist));
	list->head = NULL;
	list->tail = NULL;
	printf("★★★현황파일 생성 완료★★★\n\n");
}


void search()
{
	srand((unsigned int)time(NULL));
	while (1) {
		int a;
		int b[7] = { 0 };

		for (int i = 0; i < 7; i++)
		{
			b[i] = rand() % 50;
		}

		printf("1.위치\n2.재고 현황\n3.이전메뉴\n\n");
		scanf_s("%d", &a);
		printf("\n\n");


		if (a == 1)
		{
			system("cls");
			printf("===============================================================\n\n");
			printf("★★★지역별 출고 현황입니다.★★★\n\n");
			printf("서울 : %d개가 출고되었습니다. \n", b[0]);
			printf("경기도 : %d개가 출고되었습니다.  \n", b[1]);
			printf("경상도 : %d개가 출고되었습니다.  \n", b[2]);
			printf("전라도 : %d개가 출고되었습니다.  \n", b[3]);
			printf("충청도 : %d개가 출고되었습니다.  \n", b[4]);
			printf("강원도 : %d개가 출고되었습니다.  \n", b[5]);
			printf("제주도 : %d개가 출고되었습니다.  \n\n\n", b[6]);
			printf("===============================================================\n\n");
		}
		else if (a == 2)
		{
			system("cls");
			printf("=========================================================================\n\n");
			printf("★★★재고 현황입니다.★★★\n\n");
			printf("   snack         icecream         bread         chocolate         drink          \n\n");
			printf("    %d            %d             %d             %d             %d          \n\n", snack, icecream, bread, chocolate, drink);
			printf("=========================================================================\n\n");
		}
		else if (a == 3) {
			system("cls");
			break;
		}
		else
		{
			printf("올바른 메뉴를 입력해주세요.\n\n");
		}
	}
}


int main(void) {

	int i;

	do {

		printf("===============================================================\n\n");
		printf("매지마트 전속 창고입니다.\n\n");
		printf("1. 출고\n2. 입고\n3. 검색\n4. 현황\n5. 현황파일 생성\n6. 퇴근\n\n");
		printf("메뉴를 선택해주세요. : ");
		scanf("%d", &i);
		printf("\n\n");

		switch (i) {

		case 1:
			printf("===============================================================\n\n");
			printf("출고 메뉴입니다.\n\n");
			out();
			break;

		case 2:
			system("cls");
			printf("===============================================================\n\n");
			printf("입고 메뉴입니다.\n\n");
			in();
			system("cls");
			break;

		case 3:
			system("cls");
			printf("===============================================================\n\n");
			printf("검색 메뉴입니다.\n\n");
			search();
			break;

		case 4:
			system("cls");
			printf("===============================================================\n\n");
			printf("현황 메뉴입니다.\n\n");
			situation();
			break;

		case 5:
			system("cls");
			printf("===============================================================\n\n");
			file();
			break;

		case 6:
			printf("===============================================================\n\n");
			printf("★★★★★퇴근완료★★★★★\n\n");
			printf("===============================================================\n\n");
			break;

		default:
			printf("===============================================================\n\n");
			printf("올바른 메뉴를 입력해주세요.\n\n");
			break;

		}
	} while (i != 6);

	return 0;
}