#include <stdio.h>
/*void fib(int no)
{
	int a=0;
	int b=1;
	printf("%d\t%d",a,b);	
	int c=a+b;
	while(c<=no)
	{
		printf("\t%d",c );
		a=b;
		b=c;
		c=a+b;
	}

}*/
void fib(int no, int a, int b, int c)
{
	
	if(c<=no)
	{
		if(a==0 && b==1)
		{
			printf("%d\t%d",a,b);
		}
		printf("\t%d",c);
		//printf("\tA:\t%d\n",a);
		//printf("\tB:\t%d\n",b);
		//printf("\tC:\t%d\n",c);
		//printf("\n");
        a=b;
        b=c;
        c=a+b;
        
        fib(no,a,b,c);
	}
}
int  main()
{
	//fib(10);
	int no=10;
	int a=0;
	int b=1;
	int c= a+b;
	fib(no, a,b,c);
	return 0;
}