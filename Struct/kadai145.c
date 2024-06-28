#include<stdio.h>
struct fruit
{
	char name[30];	//商品名
	int  price;		//価格
	int  point;		//おすすめ度
	int  number;	//個数
	int  total;		//金額

};
main()
{
	int i, j;
	struct fruit fruit_data[] = { {"peach",300,5,3,0},
								  {"grape",4,10,0},
								  {"watermelon",5,8,0} };
	fruit_data->total = fruit_data->price * fruit_data->number;
	for (j = 0; j < 3; j++,)
	{
		printf("\n商品名：%s\t\n価格：%d\t\n"
			, fruit_data->name, fruit_data->price);
		printf("おすすめ度");
		for (i = 0; i < fruit_data->point; i++)
		{
			printf("★ ");
		}
		for (i = 0; i < 5 - fruit_data->point; i++)
		{
			printf("☆ ");
		}
		
		printf("\t\n個数：%d\t\n価格：%d", fruit_data->price, fruit_data->total);
	}
}