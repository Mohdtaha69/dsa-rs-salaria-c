#include<stdio.h>
int isSymmetric(int n,int arr[n][n]);
int main(){
    int n =0;
    printf("enter the n: ");
    scanf("%d",&n);
    int arr [n][n];
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int  res = isSymmetric(n,arr);
    if(res){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}
int isSymmetric(int n, int arr[n][n]){
    int check = 1;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(arr[i][j]==arr[j][i]){
                continue;
            }
            else{
                check = 0;
                return check;
                break;
            }
        }
    }
    return check;
}