//�K�`���̃v���O����
//�ϐ�kazu��0~99�̐�������
//���ꂪ�Z�Z��菬�������
//�X�[�p�[���A
//����ȊO�̓��A

#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main()
{
	int k,i;
	srand(time(0));
	for (i = 0; i < 1000000000000000000; i++)
	{
		k = rand() % 10000000000000000000 + 1;
		if (k <= 3000)
		{
			printf("��������\t");
			if (k <= 1)
			{
				printf("\n\n\n\n\n\n\n����������\t\n\n\n\n\n");
			}
		}
		else
		{
			printf("������\t");
		}
	}
}