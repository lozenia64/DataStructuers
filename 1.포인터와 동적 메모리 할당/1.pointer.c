#include <stdio.h>

int main(){
	int a, *p; //정수 변수 a, 정수에 대한 포인터 p 
	
	p = &a; //p의 값에 a의 주소를 지정 
	
	a = 10; //a의 값의 10을 지정 
	printf("  a : %d\n", a);
	printf(" *p : %d\n\n", *p);
	
	*p = 100; //p가 가리키는 장소에 100을 지정
	printf("  a : %d\n", a);
	printf(" *p : %d\n", *p);
}