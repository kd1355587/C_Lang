#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int low, high, mid, s, d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("�T���l�������");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while(low<=high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}
		if (s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("������Ȃ�����\n");
	}
	else
	{ 
		printf("d[%d]��%d��������\n", mid,s);
	}
}