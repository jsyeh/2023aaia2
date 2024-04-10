/// week08-2c.cpp 三角形
#include <stdio.h>
int main()
{
    printf("請輸入大小: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int star = i; ///有n個星星
        for(int k=1; k<=star; k++) printf("*");

        printf("\n");
    }
}
///第1樓有1顆星
///第2樓有2顆星
///第i樓有i顆星
