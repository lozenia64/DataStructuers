// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h>

// calloc 호출, 실패 시 프로그램 종료
// 포인터 p, 배열의 크기 n, 자료형의 크기 s
#define CALLOC(p,n,s) \
    if (!(p = calloc(n,s))) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

void printArr(int *arr, int size){
    int i;
    printf("Address Value\n");
    for(i=0; i<size; i++) 
		printf("%d %d\n", &arr[i], arr[i]);
}

int main(){
    int *Arr;
    CALLOC(Arr, 10, sizeof(int));
    printArr(Arr,10);
}
