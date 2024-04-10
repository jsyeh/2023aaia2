// week08-3a.cpp
// (1021-04-04) [for2] 以*輸出直角三角形
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int space=n-i, star=i;
		//for(int k=1; k<=space; k++) printf(" ");
		//for(int k=1; k<=star; k++) printf("*");
		for(int k=1; k<=n; k++){
			if(k<=space) printf(" ");
			else printf("*");
		}
		printf("\n");//printf("i:%d\n", i);
	}
}