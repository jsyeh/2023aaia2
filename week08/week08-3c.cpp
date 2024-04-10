// week08-3c.cpp
// (H07102402) 平行四邊形
#include <stdio.h>

int main( void )
{
    int i,j;
    int n;

    printf("請輸入大小:");
    scanf("%d",&n);
	printf("\n");
//your code
   	for(int i=1; i<=n; i++){
   		int space = i, star = n;
   		for(int k=1; k<=space; k++) printf(" ");
   		for(int k=1; k<=star; k++) printf("*");
   		printf("\n");
   	}
    return 0;
}