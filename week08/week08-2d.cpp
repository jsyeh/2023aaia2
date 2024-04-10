/// week08-2d.cpp 三角形 靠右
#include <stdio.h>
int main()
{
    printf("請輸入大小: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int space = n-i, star = i; ///有n個星星
        for(int k=1; k<=space; k++) printf(" ");
        for(int k=1; k<=star; k++) printf("*");

        printf("\n");
    }
}
///   *第1樓有1顆星, 空格有n-i個
///  **第2樓有2顆星
/// ***
///第i樓有i顆星
