#include "stdio.h"
#include "math.h"
int powerfun(int m , int n)
{
	int p =1;
	for (int i=1; i<=n;i++)
	{
          p =p * m;
	}
	return p;

}
int main()
{
     for (int i = 0; i < 10; ++i)
     {
     	printf("%d:\t%d\t%d\t%f\n",i,powerfun(2,i),powerfun(-3,i),pow(-3,i));
     }
     return 1;
}