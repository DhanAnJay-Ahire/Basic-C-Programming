#include <stdio.h>
int sum=1;
void fact(int no)
{
	if(no>=1)
	{
		sum = sum * no;   //5*4*3*2*1
		fact(no-1);
	}
}
int main()
{
	fact(5);
	printf("%d\n",sum );
	return 0;
}