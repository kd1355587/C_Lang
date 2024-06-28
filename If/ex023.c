#include<stdio.h>
main()
{
	int h, m, s;
	printf("•b”‚ğ“ü—Í");
	scanf("%d",&s);
	if (s <= 5000){
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b\n", h, m, s);
	}
	else {
		printf("error 5000ˆÈ‰º‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}