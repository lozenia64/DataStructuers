// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <stdlib.h>

int main(){
	{
		// Bad case
		int *pI = malloc(sizeof(int)); //정수에 대한 포인터
		float *pF = pI;
		free(pI);
	}
	{
		// Good case
		int *pI = malloc(sizeof(int)); //정수에 대한 포인터
		float *pF = (float *)pI; //정수에 대한 포인터를 부동 소수에 대한 포인터로 변환
		free(pI);
	}
}
