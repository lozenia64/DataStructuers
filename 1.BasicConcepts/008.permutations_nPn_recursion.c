#include<stdio.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void permutation(char arr[], int i, int n){
    int j, temp;
    if (i == n){
        for(j=0; j<=n; j++) printf("%c", arr[j]);
        printf("\n");
        return;
    }
    for(j=i; j<=n; j++){
        SWAP(arr[i], arr[j], temp);
        permutation(arr, i+1, n);
        SWAP(arr[i], arr[j], temp);
    }
}

int main(){
    char arr[] = {'a','b','c','d'};
    permutation(arr, 0, 3); //arr의 0번째 원소부터 n-1번째 원소까지의 순열 
}