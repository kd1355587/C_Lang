#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3
enum BitState
{
	Base = 0,				//00000000 : �ʏ���
	Poison = 1 << 0,		//00000001 : �ŏ��
	Sleep = 1 << 1,			//00000010 : �������
	Paralysis = 1 << 2,		//00000100 : �}�q���
	Burn = 1 << 3,			//00001000 : �₯�Ǐ��
	AtkUp = 1 << 4,			//00010000 : �U���͏㏸
	AtkDown = 1 << 5,		//00100000 : �U���͌���
};

typedef unsigned int UNIT;

typedef struct{				//Skill�^�\����
	char name[20];			//�X�L����
	int type;				�X�L���̎��
	int use_mp;				//�g�pMP��
	int effect;				//�X�L������
}Skill;

typedef struct {			//Spec�^�\����
	char name[20];			//���O
	int hp;					//HP
	int atk;				//�U����
	int def;				//�h���
	UNIT state;				//���
}Spec;

typedef struct {			//Chara�^�\����
	Spec sp;				//Spec
	int maxhp;				//
	int mp;					//
	Skill skl[Skil_Num];	//
}Chara;

typedef struct {
	Spec sp;
	int rate;
}Mob;
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
	printf("***** ���݂̏�� *****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�₯��\n");
	}
	if (s & AtkUp)
	{
		printf("�U���͏㏸\n");
	}
	if (s & AtkDown)
	{
		printf("�U���͌���\n");
	}
	if (s & Base)
	{
		printf("�ʏ���\n");
	}
	printf("**********************\n");
}
void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
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
			printf("�����Ƃ�����������Ȃ���");
			break;
		}
	}
}
void ClearFlg(UNIT* s)
{
	int a;
	printf("�ǂ̏�Ԃ��������܂����H\n");
	printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:���Z�b�g 0:�I��");
	scanf("%d", &a);
	if (a == 0)
	{
		break;
	}
	switch (a)
	{
	case 1:
		*s &= ~Poison;
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