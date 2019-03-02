// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h>

// malloc 호출, 실패 시 프로그램 종료
// 포인터 p, 자료형의 크기 s
#define MALLOC(p,s) \
    if (!(p = malloc(s))) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

// realloc 호출, 실패 시 프로그램 종료
// 포인터 p, 자료형의 크기 s
#define REALLOC(p,s) \
    if (!(p = realloc(p,s))) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

int main(){
    int *Arr;
    MALLOC(Arr, 10*sizeof(int));
    REALLOC(Arr, 20*(sizeof(int)));
    free(Arr);
}
