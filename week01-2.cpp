//week01-2.cpp SOIT106_BASE_006
#include <stdio.h>
int main()
{
	int a, b, c, ans;
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b && a>=c) ans = a;
	else if(b>=a && b>=c) ans = b;
	else ans = c;
	printf("%d\n", ans);
}