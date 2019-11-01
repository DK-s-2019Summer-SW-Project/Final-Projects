#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

#define MAX_bread_NUM 500
#define MAX_choco_NUM 500
#define MAX_drink_NUM 500
#define MAX_icecream_NUM 500
#define MAX_snack_num 500
typedef struct _Product
{
	char bread[MAX_bread_NUM];
	char choco[MAX_choco_NUM];
	char drink[MAX_drink_NUM];
	char icecream[MAX_icecream_NUM];
	char snack[MAX_snack_num];

} Product;

void ShowMenu(void);	
void Search(void);


int main(void)
{
	int insert;
	Product perArr[MAX_bread_NUM];



	return 0;
}

