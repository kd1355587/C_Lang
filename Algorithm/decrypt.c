#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	char s[20];
	int i;
	printf("‚“‚ğ“ü—Í");
	scanf("%s", &s);
	i = 0;
	while (s[i]!='\0')
	{
		s[i] = s[i] - 1;
		i++;
	}
	printf("•¡‡‰»•¶š—ñ%s‚ğ•\¦",s);
}