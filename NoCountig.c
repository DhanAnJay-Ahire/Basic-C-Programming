#include "stdio.h"
int main()
{
    int x1Count[10]={0};
    int x2Count[26]={0};
    int x3Count[26]={0};
    int c = 0;
    int nitem ='A';
    int nAitem ='a';
    while((c=getchar())!=EOF)
    {
    		if(c=='*')
    		{
                break;
    		}
    		if (c >='0' || c<='9')
    		{
    			++x1Count[c - '0'];

    		}
    		if(c>='A' && c<='z')
    		{
    			if (c >='A' && c<='Z')
    			{
    				++x2Count[c - 'A'];
    			}else if (c >='a' && c<='z')
    			{
    				++x3Count[c - 'a'];
    			}
    		}
    		
    }
    for(int i=0 ; i<=9 ;i++)
    {
    	printf("%d :\t%d\n",i,x1Count[i]);
    }
    for(int i=0 ; i<=25 ;i++)
    {
    	printf("%c :\t%d\n",nitem,x2Count[i]);
    	nitem++;
    }
    for(int i=0 ; i<=25 ;i++)
    {
    	printf("%c :\t%d\n",nAitem,x3Count[i]);
    	nAitem++;
    }
	return 1;
}