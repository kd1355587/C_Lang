#include<stdio.h>
#include<string.h>
//型（枠組み）を作る
struct shohin_data 
{
	//構造体メンバ
	char name[20];
	int tanka;
};
main()
{
	struct shohin_data shohin1, shohin2;
	strcpy(shohin1.name, "エンピツ");
	shohin1.tanka = 30;
	shohin2 = shohin1;
	printf("shohin1.name = %s\n", shohin1.name);
	printf("shohin1.tanka = %d\n", shohin1.tanka);
	printf("shohin2.name = %s\n", shohin2.name);
	printf("shohin2.tanka = %d\n", shohin2.tanka);
}