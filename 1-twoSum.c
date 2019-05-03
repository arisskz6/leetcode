/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

		//定义并创建一个结果数组，用来存放结果下标
		int *result = (int*)malloc((*returnSize)*sizeof(int));

		if(result != NULL)
		{
				//通过双层循环遍历数组nums，将元素两两相加，
				for(int i=1; i<numSize; i++)
				{
					for(int j=numSize; j<i; j--)
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
