/*  Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. 
If there is no such subarray, return 0 instead.  */
int minSubArrayLen(int target, int* nums, int numsSize)
{
    int right=0;
    int left=0, sum =0;
    int len = INT_MAX;
    while(right<numsSize)
    {
        sum+=nums[right];
        //we can maintain a window [left … right] whose sum we will check if it exceeds target or not.
        while(sum >=target)
        {
            int window_len = right - left + 1;
            if(window_len < len)
            {
                len = window_len;
                //printf("min_len:%d",len);
            }
            sum-=nums[left];  //move left of window to forward
            left++;        
        }
    right++;
    }
    if(len == INT_MAX)
    {
        return 0; 
    }
    else {
        return len; 
        }
}
}
