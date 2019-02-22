#include<stdio.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void permutation(char arr[], int i, int n, int k){
    int j, temp;
    if (i == k){ //깊이가 k가 되면
        for(j=0; j<k; j++) printf("%c", arr[j]); //k개의 원소만 출력해준다.
        printf("\n");
        return;
    }
    for(j=i; j<=n; j++){
        SWAP(arr[i], arr[j], temp);
        permutation(arr, i+1, n, k);
        SWAP(arr[i], arr[j], temp);
    }
}

int main(){
    char arr[] = {'a','b','c','d'};
    //arr의 0~n-1번째 원소 중 k개를 나열하는 순열.
    permutation(arr, 0, 3, 3);
}
