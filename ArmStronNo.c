#include "stdio.h"
int res = 0 ;
int sum = 1;

void RemStrongN0(int no)
{
	if(no!=0)
	{
		int rem = no % 10;
		//printf("rem:%d\n",rem );
		res+=rem*rem*rem*rem;
		//printf("res:%d\n",res );
	    //printf("No:%d\n",no );
		no=no/10;
		RemStrongN0(no);
	}

}
int main()
{
	int no=1634;
    RemStrongN0(no);
    printf("Yes Given No Is %d is ArmStron BEcause After Operation it is a %d\n",no,res);
	return 1;
}