//Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice.
int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize<2)return numsSize;
    int k = 2;

    for (int i = 2; i < numsSize; i++) 
    {
        //Add this to check how it is working but it will increase the runtime.
        printf("i:%d, k-2:%d p_:%d, p_k:%d\n",nums[i], nums[k-2], i, k);  
        if (nums[i] != nums[k - 2]) 
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
