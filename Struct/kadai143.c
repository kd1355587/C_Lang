#include<stdio.h>
struct fruit
{
	char name[30];	//¤•i–¼
	int  price;		//‰¿Ši
	int  point;		//‚¨‚·‚·‚ß“x
	int  number;	//ŒÂ”
	int  total;		//‹àŠz
};
main()
{
	int i;
	struct fruit fruit_data[] = { {"peach",300,5,3,0} };
	fruit_data->total = fruit_data->price * fruit_data->number;
	printf("¤•i–¼F%s\t\n‰¿ŠiF%d\t\n"
		, fruit_data->name, fruit_data->price);
	printf("‚¨‚·‚·‚ß“x");
	for (i = 0; i < fruit_data->point; i++)
	{
		printf("š ");
	}
	printf("\t\nŒÂ”F%d\t\n‰¿ŠiF%d", fruit_data->price, fruit_data->total);
}