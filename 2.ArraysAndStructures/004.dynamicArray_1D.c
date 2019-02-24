#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p,s) \
    if ((p = malloc(s)) == NULL) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

int main(){
	int i, n, *Arr;
	printf("Enter the number of numbers to generate : ");
	scanf("%d", &n);
	if(n < 1){ //n<1 인 경우 프로그램을 종료시킴. 
		fprintf(stderr, "Improper value of n\n");
		exit(EXIT_FAILURE);
	}
	MALLOC(Arr, n*sizeof(n));
	free(Arr);
}