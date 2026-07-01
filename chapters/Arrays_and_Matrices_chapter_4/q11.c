#include<stdio.h>
#include<stdlib.h>
int saddlePoint(int m,int n, int a[m][n]){
    /*
    1> traverse a row 
    2> find minimum in that row 
    3> for that j (colomn) find check if it maximum in that column 
    4> if yes then return that a[i][j] as saddle point 
    */
    int sp = 0;
    int idx= 0;
    
    for(int i =0; i<m; i++){
        // row traversal
        int check =1;
        int min =a[i][0];
        idx = 0;
        for(int j=0; j<n; j++){ 
            if(a[i][j]<min){
                min =a[i][j];
                idx = j;
            }
        }
        for(int k =0; k<m; k++){
            if(min>=a[k][idx]){
                continue;

            }
            else{
                check = 0;
            }
            
        }
        if(check){
                sp  = min;
            }
    }
    return sp;
}
int main(){
    int m,n;
    printf("enter the number of rows: ");
    scanf("%d",&m);
    printf("enter the number of colomns: ");
    scanf("%d",&n);
    int a[m][n];
    // inputting 
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // calling function
    int res= saddlePoint(m,n,a);
    if(res==0){
        printf("no saddle point");
        }    
    else{
        printf("%d",res);
    }

    return 0;
}