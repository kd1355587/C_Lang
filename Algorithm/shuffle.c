#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int data[20], i, target, work;
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	srand(time(0));
	for ( work=0,i = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("%d ", data[i]);
	}
}