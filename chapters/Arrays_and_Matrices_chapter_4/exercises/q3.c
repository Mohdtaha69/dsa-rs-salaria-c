#include<stdio.h>
#include<stdlib.h>
double squareofreciprocal(int ** arr,int rows, int cols){

    double res =0;
    double reciprocal =0;
    for(int i =0 ;i<rows; i++){
        int sum =0;
        for(int j =0; j<cols; j++){
            sum += arr[i][j];
        }
        reciprocal=  1.0/sum;
        
        res += reciprocal* reciprocal;
    }
    return res;
}
int main(){
    int rows,cols;
    printf("enter the number of rows and cols: ");
    scanf("%d %d",&rows,&cols);

    int ** mat = (int**)malloc(rows*sizeof(int*));
    if(mat==NULL){
        printf("not allocated");
        free(mat);
        return 1;
    }
    for(int i =0; i<rows; i++){
        mat[i] = (int *)malloc(cols* sizeof(int));
        if(mat[i]==NULL){
            printf("not allocated memory");
            for(int j = 0; j<=i; j++){
                free(mat[j]);
            }
        }
    }
    // inputting the matrix
    for(int i =0 ; i<rows; i++){
        for(int j = 0; j<cols;  j++){
            scanf("%d",&mat[i][j]);
        }
    }
    double res  = squareofreciprocal(mat,rows,cols);
    printf("%f",res);
    return 0;
}