#include<stdio.h>
int add(int a, int b);/*�v���g�^�C�v�錾*/
int subtract(int a, int b);
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("�������Q����");
	scanf("%d%d", &a, &b);
	printf("���v��%d�ł�\n", add(a, b));
	printf("���v��%d�ł�\n", subtract(a, b));
	printf("��Z��%d�ł�\n", kake(a, b));
	printf("���Z��%d�ł�\n", wari(a, b));
	
}
/*�֐��̐錾*/
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