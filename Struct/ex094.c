#include<stdio.h>
#include<string.h>
#define NIN 5
struct profile
{
	char name[20];
	int  birth[3];
	char blood[5];
};

main()
{
	struct profile student[NIN];
	struct profile* p;
	int i;
	for (p = student, i = 0; i < NIN; i++, p++)
	{
		printf("%d�l�ږ��O�����", i + 1);
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē���");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^�����");
		scanf("%s", p->blood);
	}
		for (p = student, i = 0; i < NIN; i++, p++)
		{
			if (strcmp(p->blood, "A") == 0)
			{
				printf("\n%s -- %d�N%02d��%02d�� ���t�^ -- %s�^\n", p->name
					, p->birth[0], p->birth[1]
					, p->birth[2], p->blood);
			}
		}

}