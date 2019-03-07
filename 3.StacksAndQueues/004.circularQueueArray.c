// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

typedef struct {
    int key;
    //다른 데이터 추가 가능
    //char c;
    //float f;
} element;

element queue[MAXSIZE];
int rear = 0;
int front = 0;

void queueFull(){
    //에러 메시지 출력 후 종료
    fprintf(stderr, "queue is full, cannot add element\n");
    exit(EXIT_FAILURE);
}

void queueEmpty(){
    //에러 메시지 출력 후 종료
    fprintf(stderr, "queue is empty, cannot remove element\n");
    exit(EXIT_FAILURE);
}

void addQ(element item){
    rear = (rear+1) % MAXSIZE;
    if(rear == front) queueFull(); //print error and exit
    queue[rear] = item;
}

element deleteQ(){
    if(rear == front) queueEmpty(); //print error and exit
    else {
        front = (front+1) % MAXSIZE;
        return queue[front];
    }
}

int main(){
    int i;
    element e;

    for(i=1; i<=9; i++){
        e.key=i;
        addQ(e);
    }
    for(i=1; i<=9; i++){
        e = deleteQ();
        printf("%d ", e.key);
    }

    e=deleteQ();

    return 0;
}
