#include "stdio.h"
int main()
{
	FILE *fp = NULL;
	int cl = 0, ct=0, cs=0,cw=0;
	fp = fopen("/Users/dhananjay/Documents/C/input.txt","r");
	int c =getc(fp);
	//printf("%c",c);
    while(c != EOF )
	{
        printf("%c",c);
        c = getc(fp);
        if(c == '\n' || c == '\t' || c == ' ' )
        {
        	cw++;
        }
        if(c == ' ' )
        {
        	cs++;
        }
        if(c == '\n' )
        {
        	cl++;
        }
        if(c == '\t' )
        {
        	ct++;
        }
	}
	printf("\nLines: \t%d,\n Tab: \t%d,\n Space \t%d,\n total words: \t%d\n",cl,ct,cs,cw);
	return 1;
}