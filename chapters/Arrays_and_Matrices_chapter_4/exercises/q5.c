#include<stdio.h>
#include<stdlib.h>
void transpose(float ** arr,int n){
    for (int i =0; i<n;  i++){
        for(int j = 0; j<n; j++){
            if(i==j){
                continue;
            }
            else if(i<j){
                float temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
}
int main(){
    int n ;
    printf("enter the value of n: ");
    scanf("%d", &n);
    float ** arr = (float**)malloc(n*sizeof(float*));
    if(arr==NULL){
        printf("not allocated");
        free(arr);
    }

    for(int i =0 ; i<n; i++){
        arr[i] = (float*)malloc(sizeof(float)*n);
        if(arr[i]==NULL){
            for(int j =0; j<=i; j++){
                free(arr[i]);
            }
        }
        
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            scanf("%f", &arr[i][j]);
        }
    }
    transpose(arr,n);

      for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            printf("%.1f ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}