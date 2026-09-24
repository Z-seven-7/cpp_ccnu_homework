#include<stdio.h>

void rotate(int old[3][3],int result[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			result[j][2-i] = old[i][j];
		}
	}
}

void draw(int mat[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][3] = 
	              {1,2,3,
	               4,5,6,
	               7,8,9,};
	int result[3][3];
	
	printf("原矩阵:\n");
	draw(arr);
	rotate(arr,result);
	printf("旋转90度后：\n");
	draw(result);
}
