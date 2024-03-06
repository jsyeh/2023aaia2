#include <stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a, b;
    scanf("%d", &a); ///讀入a
    scanf("%d", &b); ///讀入b
    printf("%5d\n", a);
    printf("%5d\n", b);
    printf("---------\n");///直式加法
    printf("%5d\n", a+b );
}
