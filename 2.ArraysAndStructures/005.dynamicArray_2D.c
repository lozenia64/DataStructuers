// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p,s) \
    if (!(p = malloc(s))) { \
        fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
    }

//rows*cols의 2차원 배열을 생성하는 함수.
int **make2D(int rows, int cols){
	int **array, i;
    //row 포인터들에 메모리 주소를 할당.
	MALLOC(array, rows*sizeof(*array));
    //각 row마다 col만큼의 메모리 할당.
	for(i=0;i<rows;i++) MALLOC(array[i], cols*sizeof(**array));
	return array;
}
int main(){
    int **Arr;
    Arr = make2D(3,5);
    Arr[1][3] = 1;
}