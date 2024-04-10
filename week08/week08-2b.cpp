/// week08-2b.cpp 平行四邊形
#include <stdio.h>
int main()
{
    printf("請輸入大小: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int space = n-i, star = n; ///有n個星星
        ///數一數, 每一樓,有幾個空格
        for(int k=1; k<=space; k++) printf(" ");
        for(int k=1; k<=star; k++) printf("*");

        printf("\n");
    }
}
