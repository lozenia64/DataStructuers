#include <stdio.h>

int main(){
	int I, *pInt; //정수 변수 I, 정수 포인터 pInt
	float F, *pFloat; //실수 변수 F, 실수 포인터 pFloat
	
	//적절한 크기의 메모리 영역에 대한 첫 번째 주소를 반환, pInt에 지정. 
	pInt = (int*)malloc(sizeof(int));
	pFloat = (float*)malloc(sizeof(float));
	
	*pInt = 1024; //포인터 pInt가 가리키는 주소에 1024 저장. 
	*pFloat = 3.14;
	
	printf("%d, %f\n", *pInt, *pFloat);
	
	free(pInt); //malloc으로 할당된 메모리 영역을 반환. 
	free(pFloat); 
}