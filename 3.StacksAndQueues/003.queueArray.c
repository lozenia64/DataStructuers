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

element queue[MAXSIZE];

int rear = -1;
int front = -1;

void queueFull(){
    //에러 메시지 출력
    fprintf(stderr, "queue is full, cannot add element\n");
    //exit(EXIT_FAILURE);
}

void queueEmpty(){
    //에러 메시지 출력
    fprintf(stderr, "queue is empty, cannot remove element\n");
    //exit(EXIT_FAILURE);
}

void addQ(element item){
    if(rear >= MAXSIZE-1) queueFull();
    //rear를 증가시킨뒤 queue[rear]에 item 대입
    queue[++rear] = item;
}

element deleteQ(){
    if(rear == front) queueEmpty();
    //queue[front]를 반환하고 front를 증가
    else return queue[++front];
}

int main(){
    int i;
    element e;

    //e=deleteQ();

    for(i=1; i<=10; i++){
        e.key=i;
        addQ(e);
    }
    for(i=1; i<=10; i++){
        e = deleteQ();
        printf("%d ", e.key);
    }
    
    return 0;
}
