// week08-5b.cpp
// (SLJ-Looping-003) 印出等差數列 : 輸入首項、公差與項數ｎ，輸出前 n 項。 
/*等差級數列印
輸入首項、公差、項數，輸出前n項
*/
#include <stdio.h>
int main()
{
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	printf("%d", a);
	for(int i=0; i<n-1; i++){
		a += b;
		printf(",%d", a);
	}
}