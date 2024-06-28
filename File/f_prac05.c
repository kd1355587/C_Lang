#include<stdio.h>
#define MapNum 3  //�}�b�v�̐�
#define W 10	  //�}�b�v�̉�
#define H 5			//�}�b�v�̏c

typedef struct
{
	int m_map[H][W];
} Map;
//�}�b�v�f�[�^�ǂݍ��݊֐�
void SetMap(char* filename, Map* m);

void DrawMap(Map m);
main()
{
	Map Mapdata; //�}�b�v�̃f�[�^���Ǘ�����\����
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt", "map2.txt" };
	int select;
	printf("�}�b�v�f�[�^(0,1,2)>");
	scanf("%d", &select);
	if (select >= 0 && select < MapNum)
	{
		SetMap(MapFileName[select], & Mapdata);
		DrawMap(Mapdata);
	}
	else
	{
		printf("�}�b�v�͈̔̓G���[");
	}
}
void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename,"r"))
	{
		for ( i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("���v");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}