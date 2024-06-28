#include<stdio.h>
int add(int a, int b);/*プロトタイプ宣言*/
int subtract(int a, int b);
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を２つ入力");
	scanf("%d%d", &a, &b);
	printf("合計は%dです\n", add(a, b));
	printf("減計は%dです\n", subtract(a, b));
	printf("乗算は%dです\n", kake(a, b));
	printf("除算は%dです\n", wari(a, b));
	
}
/*関数の宣言*/
int add(int a, int b)
{
	return(a + b);
}
int subtract(int a, int b)
{
	return(a - b);
}int kake(int a, int b)
{
	return(a * b);
}int wari(int a, int b)
{
	return(a / b);
}