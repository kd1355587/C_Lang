#include<stdio.h>
main()
{
	float i,j;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%f%f", &i, &j);
	printf("* * * %.0f ‚Æ %.0f ‚Ìl‘¥‰‰Z * * *\n", i, j);
	printf("˜a = %f  · = %f  Ï = %f  ¤ = %f", i + j, i - j, i * j, i / j);
}