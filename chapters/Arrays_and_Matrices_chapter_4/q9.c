#include<stdio.h>
#include<stdlib.h>
int isLowerTirangle(int **a,int n){
    int check =1;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i<j){
                if(a[i][j]==0){
                    continue;
                }
                else{
                    check = 0;
                }
            }
            else{
                continue;
            }
        }
        
    }
    return check;
}
int main(){
    printf("enter the n: ");
    int n=0; 
    scanf("%d",&n);
    int ** a = (int **) malloc(n*sizeof(int*));
    if(a==NULL){
        
        return 1;
    }
    for(int i=0; i<n; i++){
        a[i] = (int * ) malloc(n*sizeof(int));
        if(a[i]==NULL){
            for(int j =0; j<i; j++){
                free(a[j]);
            }
            free(a);
            return 1;
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int res =isLowerTirangle(a,n);
    if(res){
        printf("yes");

    }
    else{
        printf("no");
    }
    return 0;
}