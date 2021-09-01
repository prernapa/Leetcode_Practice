/* 
 * 1 september 2021
 */ 

void sortColors(int* nums, int numsSize){
    int twos = 0;
    int ones = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            ones ++;
        } 
        else if(nums[i] == 2) {
            twos ++;
        }
    }
    int zeroes = numsSize - twos - ones;
    for(int i = 0; i < numsSize; i++) {
        if(i < zeroes) {
            nums[i] = 0;
        }
        else if(i >= zeroes && i < zeroes + ones) {
            nums[i] = 1;
        }
        else {
            nums[i] = 2;
        }
    }
}
