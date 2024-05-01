#include <stdio.h>
int a[100][100];
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i=0; i<m; i++){ //Part 1
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}
	printf("\n");
	for(int j=0; j<n; j++){ //Part 2
		for(int i=m-1; i>=0; i--){
			printf("%2d ", a[i][j] );
		}
		printf("\n");
	}
}