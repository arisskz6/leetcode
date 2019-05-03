#include <stdio.h>
#include <stdlib.h>
void printArray(int* array, int arraySize);
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(void)
{
		int a[4] = {2, 7, 11, 15};
		int target = 9;
		int returnSize = 2;
		int *p = twoSum(a, 4, target, &returnSize);
		if(p != NULL)
		printArray(p, returnSize);
		else
				printf("p is NULL!");

		return(0);
}

int* twoSum(int* nums, int numSize, int target, int* returnSize)
{

		//定义并创建一个结果数组，用来存放结果下标
		int *result = (int*)malloc((*returnSize)*sizeof(int));

		if(result != NULL)
		{
				//通过双层循环遍历数组nums，将元素两两相加，
				for(int i=0; i<numSize-1; i++)
				{
					for(int j=numSize-1; j<i; j--)
					{
							if(nums[i] + nums[j] == target)
							{
								result[0] = i;
								result[1] = j;
								goto QUIT;
							}
					}
				}
QUIT:;
		}
		else
		{
				printf("Sorry, the malloc apply for memory failed!");
		}

		return result;
}

void printArray(int* array, int arraySize)
{
		printf("[");
		for(int i=0; i<arraySize; i++) 
		{	
			if(i<arraySize-1)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("]\n");
}
