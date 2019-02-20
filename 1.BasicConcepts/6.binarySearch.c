// blog.naver.com/ljy9378
// Copyright by 濡쒖죺 2019

#include <stdio.h>
#define COMPARE(x,y) (((x) < (y)) ? -1: ((x) == (y)) ? 0 : 1)

int binarySearch(int arr[], int target, int left, int right){
    int mid;
    while(left <= right){
        mid = (left + right) / 2;
        switch (COMPARE(arr[mid], target)) {
            case -1: left = mid + 1; break; //arr[mid] < target이면 target은 0~mid 사이에 존재한다. 
            case 0 : return mid; // return 되므로 break; 를 쓸 필요가 없다. 
            case 1 : right = mid - 1; //arr[mid] > target이면 target은 mid+1~n-1 사이에 존재한다
        }
    }
    return -1; //arr에 target이 존재하지 않으면 -1 반환. 
}

int main(){
	int arr[101], i;
	for(i=0; i<101; i++) arr[i]=i*2;
	printf("%d %d %d\n", binarySearch(arr, 10, 0, 100), binarySearch(arr, 33, 0, 100), binarySearch(arr, 80, 0, 100));
}