// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct {
    int key;
    //다른 데이터 추가 가능
    //char c;
    //float f;
} element;

element stack[MAXSIZE];
int top = -1;

void stackFull(){
    //에러 메시지 출력 후 프로그램 종료
    fprintf(stderr, "Stack is full, cannot add element");
    exit(EXIT_FAILURE);
}

element stackEmpty(){
    //에러 메시지 출력 후 에러 코드(key) -1 반환.
    fprintf(stderr, "Stack is empty, cannot remove element");
    element rtn;
    rtn.key = -1;
    return rtn;
}

void push(element item){
    if(top >= MAXSIZE) stackFull();
    //top을 증가시킨뒤 stack[top]에 item 대입
    stack[++top] = item;
}

element pop(){
    if(top == -1) return stackEmpty();
    //stack[top]을 반환한뒤 top을 감소
    return stack[top--];
}