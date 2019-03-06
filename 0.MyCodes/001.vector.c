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

typedef struct {
    int key;
    //다른 데이터 추가 가능
    //char c;
    //float f;
} element;

element *vector;
int vectorSize = 1;
int lastOfVector = -1;

void vectorFull(){
    //배열 vector의 크기를 2배로 늘림
    REALLOC(vector, 2*vectorSize*sizeof(*vector));
    vectorSize*=2;
}

void push_back(element item){
    if(lastOfVector >= vectorSize-1) vectorFull();
    //lastOfVector 증가시킨뒤 vector[lastOfVector]에 item 대입
    vector[++lastOfVector] = item;
}

int main(){
    int i;
    element e;

    //초기 vector의 크기는 1
	MALLOC(vector, vectorSize*sizeof(*vector));

    for(i=1; i<=10; i++){    
        e.key = i;
        push_back(e);
    }
    for(i=0; i<=lastOfVector; i++)
        printf("%d ", vector[i].key);
}
