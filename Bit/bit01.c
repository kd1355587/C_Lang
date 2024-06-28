#include<stdio.h>
enum BitState
{
	Base = 0,				//00000000 : ’Êíó‘Ô
	Poison = 1 << 0,		//00000001 : “Åó‘Ô
	Sleep = 1 << 1,			//00000010 : ‡–°ó‘Ô
	Paralysis = 1 << 2,		//00000100 : ƒ}ƒqó‘Ô
	Burn = 1 << 3,			//00001000 : ‚â‚¯‚Çó‘Ô
	AtkUp = 1 << 4,			//00010000 : UŒ‚—Íã¸
	AtkDown = 1 << 5,		//00100000 : UŒ‚—ÍŒ¸­
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
	printf("***** Œ»İ‚Ìó‘Ô *****\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("‡–°\n");
	}
	if (s & Paralysis)
	{
		printf("–ƒáƒ\n");
	}
	if (s & Burn)
	{
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚—Íã¸\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚—ÍŒ¸­\n");
	}
	if (s & Base)
	{
		printf("’Êíó‘Ô\n");
	}
	printf("**********************\n");
}
void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹");
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
			printf("‚¿‚á‚ñ‚Æ‚µ‚½”š“ü‚ê‚È‚³‚¢");
			break;
		}
	}
}
void ClearFlg(UNIT* s)
{
	int a;
	printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H\n");
	printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 7:ƒŠƒZƒbƒg 0:I—¹");
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