/// week17-3a.cpp ��k1: �w�w�ƧǪk
/// LeetCode 75. Sort Colors
void sortColors(int* nums, int numsSize) {
    for(int k=0; k<numsSize-1; k++){ //���ܦh��
        for(int i=0; i<numsSize-1; i++){ //����k,�����
            if(nums[i] > nums[i+1]){ //�j�p����
                int temp = nums[i];  //�N�洫
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
    }
}
