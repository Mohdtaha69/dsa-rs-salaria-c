#include<stdio.h>
void sort(int *arr,int n){
       for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int na = 7;
    int nb = 4;

    int arr[] = {23,12,22,43,35,1,0};
    int brr[] = {26,91,32,44};
    int res[na+nb];
    int i =0;
    int j  =0 ;
    int idx = 0;
    sort(arr,na);
    sort(brr,nb);
    while(i<na && i <nb){
        if(arr[i]<brr[j]){
            res[idx] = arr[i]; 
            idx++;
            i++;

        }
        else{

            res[idx]= brr[j];
            j++;
            idx++; 
            
        }
    }
    while(i<na){
        res[idx++] = arr[i++];
    };
    while(j<nb){
        res[idx++] = brr[j++];
    };
    for(int i=0; i< na+nb; i++){
        printf("%d ",res[i]);
    }
    return 0;
}