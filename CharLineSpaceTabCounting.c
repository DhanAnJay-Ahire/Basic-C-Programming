#include "stdio.h"
int main(int argc, char const *argv[])
{
	int c = 0;
	int nl = 0;
	int ch =0;
	int tab = 0;
	int sp=0;
	int nw=0;

	c= getchar();
	while(c!=EOF)
	{
		ch++;
		if(c== '\n')
		{
			nl++;
		}
		if (c == '\t')
		{
			tab++;
		}
		if (c == ' ')
		{
			sp++;
		}
	    if(c == '\n' || c == '\t' || c == ' ')
	    {
           nw++;
	    }
		putchar(c);
		c = getchar();
		if(c== '0')
		{
			break;
		}
	}
	printf("nl : %d\n",nl);
	printf("tab : %d\n",tab );
	printf("ch : %d\n",ch );
	printf("space: %d\n",sp);
    printf("nw: %d\n",nw);
	return 0;
}