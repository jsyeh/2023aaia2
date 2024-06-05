#include <stdio.h>
int main()
{
    for(int i=0; i<40; i++){
        for(int j=0; j<40; j++){
            float a=(i-20), b=(j-20);
            if(a*a+b*b<19*19) printf("¬P");
            else printf("  ");
        }
        printf("\n");
    }
}
