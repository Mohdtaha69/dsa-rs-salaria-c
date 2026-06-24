#include<stdio.h>
void swap(int *x ,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void interchange(int *arr,int n){
    int idx = 1 ;
    int i =0;

    while(idx<=n/2){
        swap(&arr[i],&arr[n-i-1]);
        idx++;
        i++;
    }
}
int main(){
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }
    interchange(arr,n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}