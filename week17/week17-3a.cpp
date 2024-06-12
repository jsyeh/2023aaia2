/// week17-3a.cpp 方法1: 泡泡排序法
/// LeetCode 75. Sort Colors
void sortColors(int* nums, int numsSize) {
    for(int k=0; k<numsSize-1; k++){ //做很多次
        for(int i=0; i<numsSize-1; i++){ //左到右,兩兩比較
            if(nums[i] > nums[i+1]){ //大小不對
                int temp = nums[i];  //就交換
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
    }
}
