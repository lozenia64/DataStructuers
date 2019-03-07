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

element *stack;
int stackSize = 1;
int top = -1;

void stackFull(){
    //배열 stack의 크기를 2배로 늘림
    REALLOC(stack, 2*stackSize*sizeof(*stack));
    stackSize*=2;
}

element stackEmpty(){
    //에러 메시지 출력 후 에러 코드(key) -1 반환.
    fprintf(stderr, "Stack is empty, cannot remove element");
    element rtn;
    rtn.key = -1;
    return rtn;
}

void push(element item){
    if(top >= stackSize-1) stackFull();
    //top을 증가시킨뒤 stack[top]에 item 대입
    stack[++top] = item;
}

element pop(){
    if(top == -1) return stackEmpty();
    //stack[top]을 반환한뒤 top을 감소
    return stack[top--];
}

int main(){
    int i;
    element e;

    //초기 stack의 크기는 1
	MALLOC(stack, stackSize*sizeof(*stack));

    for(i=1; i<=10; i++){    
        e.key = i;
        push(e);
    }
    for(i=1; i<=10; i++)
        printf("%d\n",pop().key);
    
    free(stack);
}
