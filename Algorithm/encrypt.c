#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	char s[20];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);
	i = 0;
	while (s[i]!='\0')
	{
		s[i] = s[i] + 1;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ%s‚ğ•\¦", s);
}