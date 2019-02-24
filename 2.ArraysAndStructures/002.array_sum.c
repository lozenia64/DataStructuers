// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>

float Input[100], ans;

float sum(float arr[], int n){
	int i;
	float ret = 0;
    //sum 함수 안에서 배열 arr의 크기를 알아낼 수는 없다.
    //따라서 크기 n을 매개변수로 넘겨주거나 전역변수로 접근해야 한다.
	for(i=0; i<n; i++) ret += arr[i];
	return ret;
}
int main(){
	int i;
	for(i=0; i<100; i++) Input[i]=i;
	ans = sum(Input, 100);
	printf("The sum is : %f\n", ans);
}