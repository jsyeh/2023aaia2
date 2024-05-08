/// week12-2.cpp 列出n以下的全部質數
#include <stdio.h>
int isPrime(int n) { ///質數不能整除
    for(int i=2; i<n; i++) {
        if(n%i==0) return 0; ///失敗
    }
    return 1; ///成功!!! 結尾不能寫功,有毒!!
}

int main()
{
    printf("請輸入1個數:");
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){ ///列出
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
}
