int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

//manual implementation of quicksort -> 1/51 test case fails due to execeeding time limit.
int maxOperations(int* nums, int numsSize, int k){
    qsort(nums, numsSize, sizeof(int), compare);


    int left = 0, right = numsSize - 1, operations = 0;

    while(left < right){
        int currentSum = *(nums+left) + *(nums+right);

        if(currentSum == k){
            operations++;
            left++;
            right--;
        }
        else if(currentSum < k){
            left++;
        }
        else{
            right--;
        }
    }

    return operations;
}