// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>

int main(){
	int Brr[5] = { 0, 1, 2, 3, 4 };
    //Brr은 Brr[0]의 주소와 같다.
	printf("%d %d\n", Brr, &Brr[0]);
	//Brr + 2는 Brr[2]의 주소와 같다.
	printf("%d %d\n", Brr + 2, &Brr[2]);
	//그러므로 Brr + 3이 가리키는 메모리 영역의 저장된 값은 Brr[3]의 값과 같다.
	printf("%d %d\n", *(Brr + 3), Brr[3]);
}