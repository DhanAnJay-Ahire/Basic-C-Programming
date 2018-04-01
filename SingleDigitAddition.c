#include "stdio.h"
int sum = 0;
void Add(int no)
{
	if (no!=0)
	{
		sum = (no % 9== 0) ? 9 : (no%9);
	}
	//printf("Sum of No is: %d\n",no );
}
int main()
{
	int no;
	printf("Enter a No for a addition of Single bit by bit: \n");
	scanf("%d",&no);
	Add(no);
	printf("Sum of No is :%d \n",sum);
	return 0;
}