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
		printf("%d人目名前を入力", i + 1);
		scanf("%s", p->name);
		printf("生年月日を空白で区切って入力");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力");
		scanf("%s", p->blood);
	}
		for (p = student, i = 0; i < NIN; i++, p++)
		{
			if (strcmp(p->blood, "A") == 0)
			{
				printf("\n%s -- %d年%02d月%02d日 血液型 -- %s型\n", p->name
					, p->birth[0], p->birth[1]
					, p->birth[2], p->blood);
			}
		}

}