// week08-5c.cpp
#include <stdio.h>
int main()
{
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	printf("%d", a);
	for(int i=0; i<n-1; i++){
		a *= b;
		printf(",%d", a);
	}
}