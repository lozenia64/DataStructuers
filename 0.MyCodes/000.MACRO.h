// blog.naver.com/ljy9378
// Copyright by 로졔 2019

// 함수와 매크로는 각각의 장단점이 있다
// 함수가 더 읽고 쓰기 쉽지만 매크로는 어떤 타입에도 사용할 수 있다.

#include <stdio.h>
#include <stdlib.h>

// malloc 호출, 실패 시 프로그램 종료
// 포인터 p, 자료형의 크기 s
#define MALLOC(p,s) \
    if (!(p = malloc(s))) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

// calloc 호출, 실패 시 프로그램 종료
// 포인터 p, 배열의 크기 n, 자료형의 크기 s
#define CALLOC(p,n,s) \
    if (!(p = calloc(n,s))) { \
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

// x, y 값을 교환
// 서로 변경할 포인터 변수 x와 y, 임시 저장 변수 t
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

// 수치 비교
// x < y : -1, x = y : 0, x > y : 1
#define COMPARE(x,y) (((x) < (y)) ? -1: ((x) == (y)) ? 0 : 1)