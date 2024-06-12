// week17-3b.cpp 方法2: 選擇排序法 Selection Sort
void sortColors(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){ //左手i
        for(int j=i+1; j<numsSize; j++){ //右手j
            if( nums[i] > nums[j] ){ //大小不對
                int temp = nums[i]; //就交換
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
