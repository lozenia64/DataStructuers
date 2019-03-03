// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>

typedef struct{
    char data;
    struct list *link;
} list;

int main(){
    list item1, item2, item3;
    item1.data = 'a', item2.data = 'b', item3.data = 'c';
    item1.link = item2.link = item3.link = NULL;

    //link 필드를 다른 구조를 가리키는 포인터로 대체하여 서로 연결할 수 있다.
    item1.link = &item2, item2.link = &item3;
}
