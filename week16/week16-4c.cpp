// week16-4c.cpp SOIT108_Advance_009B
#include <stdio.h>
int main()
{
	char line[100];
	scanf("%s", line);
	for(int i=0; line[i]!=0; i++){
		if(line[i]>='0'&&line[i]<='9'){
			printf("%c\n", line[i]);
			break;
		}
	}
}