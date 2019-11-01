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
		fprintf(stderr, "������ ���� �� �� �����ϴ�.\n");
		exit(1);
	}

	fprintf(mart, "������ ����� :  %d\n", tosnack);
	fprintf(mart, "���̽�ũ���� ����� :  %d\n", toicecream);
	fprintf(mart, "���� ����� :  %d\n", tobread);
	fprintf(mart, "���ݸ��� ����� :  %d\n", tochocolate);
	fprintf(mart, "������� ����� :  %d\n\n\n", todrink);

	fprintf(mart, "������ ���԰� :  %d\n", tisnack);
	fprintf(mart, "���̽�ũ���� ���԰� : %d\n", tiicecream);
	fprintf(mart, "���� ���԰� :  %d\n", tibread);
	fprintf(mart, "���ݸ��� ���԰� :  %d\n", tichocolate);
	fprintf(mart, "������� ���԰� :  %d\n\n\n", tidrink);

	fprintf(mart, "���� �ܿ��� : %d\n", snack);
	fprintf(mart, "���̽�ũ�� �ܿ��� : %d\n", icecream);
	fprintf(mart, "�� �ܿ��� : %d\n", bread);
	fprintf(mart, "���ݸ� �ܿ��� : %d\n", chocolate);
	fprintf(mart, "����� �ܿ��� : %d\n\n\n", drink);
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
		printf("1. ����\n2. ���̽�ũ��\n3. ��\n4. ���ݸ�\n5. �����\n6. �����޴�\n\n");
		printf("���� ��ǰ�� �԰��Ͻðڽ��ϱ�?\n\n");
		scanf("%d", &i);
		printf("\n");
		switch (i) {
		case 1:
			printf("===============================================================\n\n");
			if (snack == 500) {
				printf("�ڡڡڰ��� â�� �� á���ϴ�.�ڡڡ�\n\n");
			}
			else {
				printf("���ڴ� %d���� ���� �� �ֽ��ϴ�.\n\n", 500 - snack);
				printf("���ڸ� �� �� �԰��Ͻðڽ��ϱ�? : ");
				scanf("%d", &insnack);
				printf("\n");
				if (insnack > 500 - snack) {
					printf("===============================================================\n\n");
					printf("%d�� ���ϸ� �԰��� �� �ֽ��ϴ�.\n\n", 500 - snack);

				}

				else {
					printf("===============================================================\n\n");
					snack += insnack;
					tisnack += insnack;
					printf("�ڡڡڰ��ڰ� %d�� �԰�Ǿ����ϴ�.�ڡڡ�\n\n", insnack);
				}
			}
			break;
		case 2:
			printf("===============================================================\n\n");
			if (icecream == 500) {
				printf("�ڡڡھ��̽�ũ�� â�� �� á���ϴ�.�ڡڡ�\n\n");
			}
			else {
				printf("���̽�ũ���� %d�� ���� �� �ֽ��ϴ�.\n\n", 500 - icecream);
				printf("���̽�ũ���� �� �� �԰��Ͻðڽ��ϱ�? :  ");
				scanf("%d", &inicecream);
				printf("\n");
				if (inicecream > 500 - icecream) {
					printf("===============================================================\n\n");
					printf("%d�� ���ϸ� �԰��� �� �ֽ��ϴ�.\n\n", 500 - icecream);
				}
				else {
					printf("===============================================================\n\n");
					icecream += inicecream;
					tiicecream += inicecream;
					printf("�ڡڡھ��̽�ũ���� %d�� �԰�Ǿ����ϴ�.�ڡڡ�\n\n", inicecream);
				}
			}
			break;
		case 3:
			printf("===============================================================\n\n");
			if (bread == 500) {
				printf("�ڡڡڻ� â�� �� á���ϴ�.�ڡڡ�\n\n");
			}
			else {
				printf("���� %d�� ���� �� �ֽ��ϴ�.\n\n", 500 - bread);
				printf("���� �� �� �԰��Ͻðڽ��ϱ�? : ");
				scanf("%d", &inbread);
				printf("\n");


				if (inbread > 500 - bread) {
					printf("===============================================================\n\n");
					printf("%d�� ���ϸ� �԰��� �� �ֽ��ϴ�.\n\n", 500 - bread);
				}
				else {
					printf("===============================================================\n\n");
					bread += inbread;
					tibread += inbread;
					printf("�ڡڡڻ��� %d�� �԰�Ǿ����ϴ�.�ڡڡ�\n\n", inbread);
				}
			}
			break;
		case 4:
			printf("===============================================================\n\n");
			if (chocolate == 500) {
				printf("�ڡڡ����ݸ� â�� �� á���ϴ�.�ڡڡ�\n\n");
			}
			else {
				printf("���ݸ��� %d�� ���� �� �ֽ��ϴ�.\n\n", 500 - chocolate);
				printf("���ݸ��� �� �� �԰��Ͻðڽ��ϱ�? : ");
				scanf("%d", &inchocolate);
				printf("\n");
				if (inchocolate > 500 - chocolate) {
					printf("===============================================================\n\n");
					printf("%d�� ���ϸ� �԰��� �� �ֽ��ϴ�.\n\n", 500 - chocolate);
				}
				else {
					printf("===============================================================\n\n");
					chocolate += inchocolate;
					tichocolate += inchocolate;
					printf("�ڡڡ����ݸ��� %d�� �԰�Ǿ����ϴ�.�ڡڡ�\n\n", inchocolate);
				}
			}
			break;
		case 5:
			printf("===============================================================\n\n");
			if (drink == 500) {
				printf("�ڡڡ������ â�� �� á���ϴ�.�ڡڡ�\n\n");
			}
			else {
				printf("������� %d�� ���� �� �ֽ��ϴ�.\n\n", 500 - drink);
				printf("������� �� �� �԰��Ͻðڽ��ϱ�? : ");
				scanf("%d", &indrink);
				printf("\n");
				if (indrink > 500 - drink) {
					printf("===============================================================\n\n");
					printf("%d�� ���ϸ� �԰��� �� �ֽ��ϴ�.\n\n", 500 - drink);
				}
				else {
					printf("===============================================================\n\n");
					drink += indrink;
					tidrink += indrink;
					printf("�ڡڡ�������� %d�� �԰�Ǿ����ϴ�.�ڡڡ�\n\n", indrink);
				}
			}
			break;

		case 6:
			break;
		default:
			printf("===============================================================\n\n");
			printf("�ùٸ� �޴��� �Է����ּ���.\n\n");
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
		printf("â�� ������ϴ�.\n\n");
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

		printf("������ ��� :  %d\n", outsnack);
		printf("���̽�ũ���� ��� :  %d\n", outicecream);
		printf("���� ��� :  %d\n", outbread);
		printf("���ݸ��� ��� :  %d\n", outchocolate);
		printf("������� ��� :  %d\n\n\n", outdrink);

		printf("���� �ܿ��� : %d\n", snack);
		printf("���̽�ũ�� �ܿ��� : %d\n", icecream);
		printf("�� �ܿ��� : %d\n", bread);
		printf("���ݸ� �ܿ��� : %d\n", chocolate);
		printf("����� �ܿ��� : %d\n\n\n", drink);
	}
}

void situation() {

	printf("������ ����� :  %d\n", tosnack);
	printf("���̽�ũ���� ����� :  %d\n", toicecream);
	printf("���� ����� :  %d\n", tobread);
	printf("���ݸ��� ����� :  %d\n", tochocolate);
	printf("������� ����� :  %d\n\n\n", todrink);

	printf("������ ���԰� :  %d\n", tisnack);
	printf("���̽�ũ���� ���԰� : %d\n", tiicecream);
	printf("���� ���԰� :  %d\n", tibread);
	printf("���ݸ��� ���԰� :  %d\n", tichocolate);
	printf("������� ���԰� :  %d\n\n\n", tidrink);

	printf("���� �ܿ��� : %d\n", snack);
	printf("���̽�ũ�� �ܿ��� : %d\n", icecream);
	printf("�� �ܿ��� : %d\n", bread);
	printf("���ݸ� �ܿ��� : %d\n", chocolate);
	printf("����� �ܿ��� : %d\n\n\n", drink);

	if (tosnack > toicecream && tosnack > tobread && tosnack > tochocolate && tosnack > todrink)
		printf("�ڡڡڰ����� �Ǹ����� ���� �����ϴ�.�ڡڡ�\n\n");
	else if (toicecream > tosnack && toicecream > tobread && toicecream > tochocolate && toicecream > todrink)
		printf("�ڡڡھ��̽�ũ���� �Ǹ����� ���� �����ϴ�.�ڡڡ�\n\n");
	else if (tobread > tosnack && tobread > toicecream && tobread > tochocolate && tobread > todrink)
		printf("�ڡڡڻ��� �Ǹ����� ���� �����ϴ�.�ڡڡ�\n\n");
	else if (tochocolate > tosnack && tochocolate > toicecream && tochocolate > tobread && tochocolate > todrink)
		printf("�ڡڡ����ݸ��� �Ǹ����� ���� �����ϴ�.�ڡڡ�\n\n");
	else if (todrink > tosnack && todrink > toicecream && todrink > tobread && todrink > tochocolate)
		printf("�ڡڡ�������� �Ǹ����� ���� �����ϴ�.�ڡڡ�\n\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("                                       ==========\n");
	printf("                                      ����    ����\n");
	printf("                                      ��        ��\n");
	printf("                                      ����    Ʈ��\n");
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
	printf("�ڡڡ���Ȳ���� ���� �Ϸ�ڡڡ�\n\n");
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

		printf("1.��ġ\n2.��� ��Ȳ\n3.�����޴�\n\n");
		scanf_s("%d", &a);
		printf("\n\n");


		if (a == 1)
		{
			system("cls");
			printf("===============================================================\n\n");
			printf("�ڡڡ������� ��� ��Ȳ�Դϴ�.�ڡڡ�\n\n");
			printf("���� : %d���� ���Ǿ����ϴ�. \n", b[0]);
			printf("��⵵ : %d���� ���Ǿ����ϴ�.  \n", b[1]);
			printf("��� : %d���� ���Ǿ����ϴ�.  \n", b[2]);
			printf("���� : %d���� ���Ǿ����ϴ�.  \n", b[3]);
			printf("��û�� : %d���� ���Ǿ����ϴ�.  \n", b[4]);
			printf("������ : %d���� ���Ǿ����ϴ�.  \n", b[5]);
			printf("���ֵ� : %d���� ���Ǿ����ϴ�.  \n\n\n", b[6]);
			printf("===============================================================\n\n");
		}
		else if (a == 2)
		{
			system("cls");
			printf("=========================================================================\n\n");
			printf("�ڡڡ���� ��Ȳ�Դϴ�.�ڡڡ�\n\n");
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
			printf("�ùٸ� �޴��� �Է����ּ���.\n\n");
		}
	}
}


int main(void) {

	int i;

	do {

		printf("===============================================================\n\n");
		printf("������Ʈ ���� â���Դϴ�.\n\n");
		printf("1. ���\n2. �԰�\n3. �˻�\n4. ��Ȳ\n5. ��Ȳ���� ����\n6. ���\n\n");
		printf("�޴��� �������ּ���. : ");
		scanf("%d", &i);
		printf("\n\n");

		switch (i) {

		case 1:
			printf("===============================================================\n\n");
			printf("��� �޴��Դϴ�.\n\n");
			out();
			break;

		case 2:
			system("cls");
			printf("===============================================================\n\n");
			printf("�԰� �޴��Դϴ�.\n\n");
			in();
			system("cls");
			break;

		case 3:
			system("cls");
			printf("===============================================================\n\n");
			printf("�˻� �޴��Դϴ�.\n\n");
			search();
			break;

		case 4:
			system("cls");
			printf("===============================================================\n\n");
			printf("��Ȳ �޴��Դϴ�.\n\n");
			situation();
			break;

		case 5:
			system("cls");
			printf("===============================================================\n\n");
			file();
			break;

		case 6:
			printf("===============================================================\n\n");
			printf("�ڡڡڡڡ���ٿϷ�ڡڡڡڡ�\n\n");
			printf("===============================================================\n\n");
			break;

		default:
			printf("===============================================================\n\n");
			printf("�ùٸ� �޴��� �Է����ּ���.\n\n");
			break;

		}
	} while (i != 6);

	return 0;
}