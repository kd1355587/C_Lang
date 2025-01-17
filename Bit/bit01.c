#include<stdio.h>
enum BitState
{
	Base = 0,				//00000000 : 通常状態
	Poison = 1 << 0,		//00000001 : 毒状態
	Sleep = 1 << 1,			//00000010 : 睡眠状態
	Paralysis = 1 << 2,		//00000100 : マヒ状態
	Burn = 1 << 3,			//00001000 : やけど状態
	AtkUp = 1 << 4,			//00010000 : 攻撃力上昇
	AtkDown = 1 << 5,		//00100000 : 攻撃力減少
};

typedef unsigned int UNIT;
void DisplayStatus(UNIT s);
void ChangeFlg(UNIT* s);
void ClearFlg(UNIT* s);
main()
{
	UNIT MyState = Base;
	ChangeFlg(&MyState);
	DisplayStatus(MyState);
	ClearFlg(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UNIT s)
{
	printf("***** 現在の状態 *****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力上昇\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力減少\n");
	}
	if (s & Base)
	{
		printf("通常状態\n");
	}
	printf("**********************\n");
}
void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
		case 3:
			*s |= Paralysis;
		case 4:
			*s |= Burn;
		case 5:
			*s |= AtkUp;
		case 6:
			*s |= AtkDown;
		case 0:
			*s |= Base;
		default:
			printf("ちゃんとした数字入れなさい");
			break;
		}
	}
}
void ClearFlg(UNIT* s)
{
	int a;
	printf("どの状態を解除しますか？\n");
	printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:リセット 0:終了");
	scanf("%d", &a);
	if (a == 0)
	{

	}
	switch (a)
	{
	case 1:
		*s &= ~Poison;
		break;
	case 2:
		*s &= ~Sleep;
	case 3:
		*s &= ~Paralysis;
	case 4:
		*s &= ~Burn;
	case 5:
		*s &= ~AtkUp;
	case 6:
		*s &= ~AtkDown;
	case 7:
		*s &= Base;
	}
}