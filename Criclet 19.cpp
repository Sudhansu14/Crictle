#include<stdio.h>

main()
{
	int r,c,s;

    for (r=5;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
        	printf("%d",c);
		}
		for(s=5;s>r;s--)
		{
			printf(" ")
		}
    }
    for(r=2;r<=5;r++)
    {
    	for(c=1;c<=r;c++)
    	{
    		printf("%d",c);
		}
	}    printf("\n");
    
}

