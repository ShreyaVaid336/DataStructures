#include <stdio.h>
void display(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100] = {1,2,5,67,88};
    int size = 5;
    display(arr,size);
    return 0;
}
