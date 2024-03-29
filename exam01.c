#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "./sizeinfo.h"


void main() {
	int price;
	printf("금액을 입력해 주세요");
	scanf("%d", &price);

	printf("\n %d", price);

	int cnt_50000 = 0;
	int cnt_10000 = 0;
	int cnt_5000 = 0;
	int cnt_1000 = 0;
	int cnt_500 = 0;
	int cnt_100 = 0;

	cnt_50000 = price / 50000;
	cnt_10000 = (price % 50000) / 10000;
	cnt_5000 = (price % 10000) / 5000;
	cnt_1000 = (price % 5000) / 1000;
	cnt_500 = (price % 1000) / 500;
	cnt_100 = (price % 500) / 100;

	printf("\n오만 원: %d", cnt_50000);
	printf("\n만 원: %d", cnt_10000);
	printf("\n오천 원: %d", cnt_5000);
	printf("\n천 원: %d", cnt_1000);
	printf("\n오백 원: %d", cnt_500);
	printf("\n백 원: %d", cnt_100);
}
