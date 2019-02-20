// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h> //exit 호출을 위한 헤더 선언

// 포인터 p, 자료형의 크기 s
#define MALLOC(p,s) \
    if ((p = malloc(s) == NULL) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

int main(){
	int I, *pInt; //정수 변수 I, 정수 포인터 pInt

    MALLOC(pInt, sizeof(int));
	*pInt = 1024; //포인터 pInt가 가리키는 주소에 1024 저장. 
	printf("%d\n", *pInt);

	MALLOC(pInt, sizeof(int));
	printf("%d\n", *pInt);
	
	free(pInt); //malloc으로 할당된 메모리 영역을 반환. 
}
