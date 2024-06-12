/// week17-2.cpp 選擇排序法 Selection Sort
#include <stdio.h>
void myPrint(int a[10])
{
    for(int i=0; i<10; i++){
        printf("%d ", a[i] );
    }
    printf("\n");
}
int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    myPrint(a);  ///以上是偷來的程式碼,不用打
    ///下面請自己打, 不要剪貼、不要改。
    for(int i=0; i<10; i++){ /// 左手i
        for(int j=i+1; j<10; j++){ /// 右手j
            if( a[i] > a[j] ){  /// 大小不對
                int temp = a[i]; /// 就交換
                a[i] = a[j];
                a[j] = temp;
            }
        }
        myPrint(a);
    }
}
