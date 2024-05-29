/// week15-5b.cpp SOIT108_Advance_002B
#include <stdio.h>
int main()
{
	int a, b, c, ans;
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b&&b>=c) ans = a*100+b*10+c+1;
	if(a>=c&&c>=b) ans = a*100+c*10+b+1;
	if(b>=a&&a>=c) ans = b*100+a*10+c+1;
	if(b>=c&&c>=a) ans = b*100+c*10+a+1;
	if(c>=a&&a>=b) ans = c*100+a*10+b+1;
	if(c>=b&&b>=a) ans = c*100+b*10+a+1;
	printf("%d", ans);
}
