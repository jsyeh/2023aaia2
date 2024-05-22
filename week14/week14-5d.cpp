/// week14-5d.cpp SOIT107_ADVANCE_014
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);

	int ans = 0;
	for(int i=1; i<=N; i+=2){
		ans += i;
	}
	printf("%d", ans);
}
