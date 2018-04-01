#include "stdio.h"
#include <stdlib.h>

int CheckArrayNo(int *arr,int size)
{
	int *Counter=(int*)calloc(size,sizeof(int));
	for (int i = 0; i < (size); ++i)
	{
       if((++Counter[*arr-0])==2)    //if((++Counter[*arr-'A'])==2)
       {
          printf("No reeated is :%d\n",*arr);
          return 1;
          break;
       }
		arr++;
	}
	return 0;
}
int main()
{
    int arr[]={10,2,3,70,2,30};
    //int arr[]={'A','B','A','S'};
    int size = (sizeof(arr))/(sizeof(int));
    int res= CheckArrayNo(arr,size);
    if(res==0)
    {
        printf("Not Found Repeated No\n");
    }
    return 1; 
}