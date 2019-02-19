#include <stdio.h>
#include <stdlib.h>

int main(){
	int I, *pInt; //정수 변수 I, 정수 포인터 pInt
	float F, *pFloat; //실수 변수 F, 실수 포인터 pFloat
	
	//메모리 부족으로 malloc 호출이 실패한다면 프로그램 종료 
	if ((pInt = (int*)malloc(sizeof(int))) == NULL || (pFloat = (float*)malloc(sizeof(float))) == NULL){
		fprintf(stderr, "Insufficient memory");
		exit(EXIT_FAILURE);
	}
	
	*pInt = 1024; //포인터 pInt가 가리키는 주소에 1024 저장. 
	*pFloat = 3.14;
	
	printf("%d, %f\n", *pInt, *pFloat);
	
	free(pInt); //malloc으로 할당된 메모리 영역을 반환. 
	free(pFloat); 
}