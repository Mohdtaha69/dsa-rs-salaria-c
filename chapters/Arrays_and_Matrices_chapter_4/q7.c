#include<stdio.h>
#include<stdlib.h>
int sumofmainelement(int ** arr,int r,int c){
    int sum = 0;
    for(int i =0; i<r; i++){
        for(int j =0 ;j<c; j++){
            if(i>j){
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int main(){
    printf("enter the value of rows and coloms: ");
    int r,c;
    scanf("%d %d",&r,&c);
    int ** mat = (int **)malloc(r*sizeof(int*));
    if(mat==NULL){
        printf("allocation failed");
        free(mat);
        return 1;
    }
    for(int i =0; i<r; i++){
        mat[i]= (int*)malloc(c* sizeof(int));
        if(mat[i]==NULL){
            for(int j=0; j<=i; j++){
                free(mat[j]);
            }
            free(mat);
            return 1;
        }
    }
    // inputting 
    for(int i=0 ; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int res =  sumofmainelement(mat,r,c);
    printf("%d",res);
    return 0;
}