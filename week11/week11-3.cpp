/// week11-3.cpp 最大公因數 輾轉相除法
#include <stdio.h>
int gcd(int a, int b) { ///老大a, 老二b, 老三 a%b
    if(a==0) return b;
    if(b==0) return a; ///其實這兩行,可以刪掉1行,因為會交換
    return gcd(b, a%b); ///老二升級變老大, 老三a%b變老二
}
int main()
{
    printf("請輸入2個數字: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("答案是:%d",  ans);
}
