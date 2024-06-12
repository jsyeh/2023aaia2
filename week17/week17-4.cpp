// week17-4.cpp ��k3: Bucket Sort ��l�ƧǪk
void sortColors(int* nums, int numsSize) {
    int zero=0, one=0, two=0;  //�ǳ�3�ӱ�l,���O�� 0, 1, 2 ���X��
    for(int i=0; i<numsSize; i++){
        if(nums[i] == 0) zero++; //���1��0
        if(nums[i] == 1) one++;  //���1��1
        if(nums[i] == 2) two++;  //���1��2
    }
    for(int i=0; i<numsSize; i++){ //�̫�A��^�h�B�Ʀn
        if(i<zero) nums[i] = 0; //�̥���,����0
        else if(i<zero+one) nums[i] = 1; //�ѤU������,��1
        else nums[i] = 2; //�ѤU�k��, ��2
    }
}
