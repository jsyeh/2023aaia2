///week14-5f.cpp SOIT107_ADVANCE_016
#include <stdio.h>
int main()
{
	int n;
	int ans=0;
	while( scanf("%d",&n)==1 ){
		if(n==0) break;
		ans++;
	}
	printf("%d", ans);
}
