// week17-3b.cpp ��k2: ��ܱƧǪk Selection Sort
void sortColors(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){ //����i
        for(int j=i+1; j<numsSize; j++){ //�k��j
            if( nums[i] > nums[j] ){ //�j�p����
                int temp = nums[i]; //�N�洫
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
