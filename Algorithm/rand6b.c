#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main()
{
	int player,cp;
	printf("�����o���܂����H\n(1�F�O�[�@2�F�`���L�@3�F�p�[)");
	scanf("%d", &player);
	srand(time(0));
	cp = rand() % 2;
	if (player==1)
	{
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (player == 2)
	{
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (player == 3)
	{
		printf("�v���C���[�̓p�[�ł�\n");
	}
	if (cp == 0)
	{
		printf("cpu�̓O�[�ł�\n");
	}
	if (cp == 1)
	{
		printf("cpu�̓`���L�ł�\n");
	}
	if (cp == 2)
	{
		printf("cpu�̓p�[�ł�\n");
	}
	if (player==cp)
	{
		printf("�������ł�\n");
	}
	if ((player+1)%3==cp )
	{
		printf("player�̏����ł�\n");
	}
	if ((cp + 1) % 3 == player)
	{
		printf("cpu�̏����ł�\n");
	}
}