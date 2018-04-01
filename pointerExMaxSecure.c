#include "stdio.h"
int main()
{
	char *ptr = "\t\t\tValid Input";
	int i =2;

	//while(i)
	{
		printf("%c",ptr[i]);
		ptr++;
		i++;
	}
	printf("\n end");
	return 1;
}