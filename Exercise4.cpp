#include<stdio.h>

int main()
{
	int a,b;
	printf("玩家1出拳：0石头，1剪刀，2布");
	scanf("%d",&a) ;
	printf("玩家2出拳：0石头，1剪刀，2布");
	scanf("%d",&b) ;
	
	if(a == b)
	{
		printf("平局");
	}
	else if((a+1)%3 == b)
	{
		printf("a win");
	}
	else
	{
		printf("b win");
	}
	return 0;
}
