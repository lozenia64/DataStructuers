#include<stdio.h>

void RotateR(char arr[], int i, int j){
    int k;
    char end = arr[j];
    for(k=j; k>i; k--) arr[k]=arr[k-1];
    arr[i]=end;
}
void RotateL(char arr[], int i, int j){
    int k;
    char start = arr[i];
    for(k=i; k<j; k++) arr[k]=arr[k+1];
    arr[j]=start;
}
void permutation(char arr[], int i, int n, int k){
    int j;
    if (i == k){ //깊이가 k가 되면
		for(j=0; j<k; j++) printf("%c", arr[j]); //k개의 원소만 출력해준다.
    	printf("\n");
        return;
    }
    for(j=i; j<=n; j++){
        RotateR(arr, i, j); //arr의 i~j까지 원소들을 오른쪽으로 회전.
        permutation(arr, i+1, n, k);
        RotateL(arr, i, j); //arr의 i~j까지 원소들을 왼쪽으로 회전.
    }
}

int main(){
    char arr[] = {'a','b','c','d'};
    //arr의 0~n-1번째 원소 중 k개를 나열하는 순열.
    permutation(arr, 0, 3, 3);
}
