#include <stdio.h>
int main()
{
	int arr[3][3]={{4,2,5},{8,12,14},{11,44,23}};

    int s1=0,s2=0,s3=0;

	for (int i=0 ; i<=3;i++)
	{
		for (int j=0;j<=2;j++)
		{
			if(i==3)
			{
				printf("%d\t%d\t%d\n",s1,s2,s3);
				break;
			}

			printf("%d \t",arr[i][j]);
			if(j==0)
			{
				s1+=arr[i][j];
			}
			if(j==1)
			{
				s2+=arr[i][j];
			}
			if(j==2)
			{
				s3+=arr[i][j];
				printf("\n");
			}
		}
	}
	return 0;
}