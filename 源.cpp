#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz)
{
	int left = arr[0];
	int right = sz - 1;
	int tmp = 0;
	while(left<right)
	{
		while (arr[left] % 2 == 0)
		{
			if (arr[right] % 2 == 1)
			{
				tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
				left++;
				right--;
			}
			else
				right--;
		}
		left++;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int arr[] = { 1,3,5,7,9,9,7,5,3,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}