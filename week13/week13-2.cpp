/// week13-2.cpp 要了解怎麼做矩陣乘法
///  我們要分成 3 個 Parts 來解決。這裡只用到 Part 1 讀入 a[i][j] 和 Part 2 印出 a[i][j] 小心格式
# include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n;
    //yourcode
    //Part 1: input a[i][j]
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j] );
        }
    }
    //Part 2: output a[i][j]
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ", a[i][j] );
        }
        printf("\n");
    }
}
