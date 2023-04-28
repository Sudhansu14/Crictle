#include<stdio.h>

main()

{
	int r,c;
	
	for(r=4;r>=9;r--)
	{
		for(c=4;c<=r;c++)
		{
		  printf("%d",c);
		}
		printf("\n");
	}
}
