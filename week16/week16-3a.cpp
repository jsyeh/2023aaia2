// week16-3a.cpp SOIT108_Advance_014B
#include <stdio.h>
int main()
{
	int n, ten=1;
	scanf("%d", &n);
	
	while(n>0){
		int now = n%10;
		printf("%d ", now*ten);
		n = n / 10;
		ten = ten * 10;
	}
}