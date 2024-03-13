//week04-5.cpp A021 C/C++
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	int ans = 1;
	for(int i=1; i<=a; i++){
		ans *= i;
	}
	
	printf("%d", ans);
}