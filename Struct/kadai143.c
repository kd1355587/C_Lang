#include<stdio.h>
struct fruit
{
	char name[30];	//���i��
	int  price;		//���i
	int  point;		//�������ߓx
	int  number;	//��
	int  total;		//���z
};
main()
{
	int i;
	struct fruit fruit_data[] = { {"peach",300,5,3,0} };
	fruit_data->total = fruit_data->price * fruit_data->number;
	printf("���i���F%s\t\n���i�F%d\t\n"
		, fruit_data->name, fruit_data->price);
	printf("�������ߓx");
	for (i = 0; i < fruit_data->point; i++)
	{
		printf("�� ");
	}
	printf("\t\n���F%d\t\n���i�F%d", fruit_data->price, fruit_data->total);
}