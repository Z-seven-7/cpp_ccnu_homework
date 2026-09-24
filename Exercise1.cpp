#include<stdio.h>

int binarySearch(int list[],int key,int arraySize)
{
	int left = 0;
	int right = arraySize-1;
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(list[mid] == key)
		{
			return mid;
		}
		else if(list[mid] < key)
		{
			left = mid +1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,4,5,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int num = 4;
	int t = binarySearch(arr,num,size);
	if(t != -1)
	printf("找到%d,下标:%d\n",num,t);
	else
	printf("未找到%d",num);
	return 0;
}
