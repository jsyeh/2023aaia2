//week17-5a.cpp SOIT108_Advance_008
#include <stdio.h>
int main()
{
	int a[10]; //input
	for(int i=0; i<10; i++){
		scanf("%d", &a[i] );
	}
	for(int i=0; i<10; i++){//sorting here
		for(int j=i+1; j<10; j++){
			if( a[i] < a[j] ){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0; i<10; i++){//output
		printf("%d ", a[i] );
	}
}
