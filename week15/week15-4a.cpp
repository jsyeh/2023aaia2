/// week15-4a.cpp SLJ-Array-022
#include <stdio.h>
int a[30][30];
int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			scanf("%d", &a[i][j] );
		}
	}

	printf("\n");
	for(int j=0; j<N; j++){
		for(int i=M-1; i>=0; i--){
			printf("%2d ", a[i][j] );
		}
		printf("\n");
	}
}
