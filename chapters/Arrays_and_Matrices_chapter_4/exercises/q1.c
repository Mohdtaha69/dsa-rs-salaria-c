#include <stdio.h>
void removex(int *arr, int j, int *n) {
    (*n)--;

    for (int i = j; i < *n; i++) {
        arr[i] = arr[i + 1];
    }
}

void removeDuplicate(int *arr, int *n) {
    for (int i = 0; i < *n; i =i+1){
        for (int j = i + 1; j < *n; ) {
            if (arr[i] == arr[j]) {
                removex(arr, j, n);
            }
            else {
                j++;
            }
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicate(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}