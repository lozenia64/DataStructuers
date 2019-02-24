// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>

void print(int *ptr, int rows){
	int i;
	printf(" Address Contents\n");
	for(i=0; i<rows; i++) printf("%8u%5d\n", ptr+i, *(ptr+i));
	printf("\n");
}
int main(){
	int arr[]={0,1,2,3,4};
	print(&arr[0], 5);
}
