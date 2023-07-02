#include <stdio.h>


void reverseArray(int arr[], int s , int e ){
    
    int temp;
    while(s<e){
        temp = arr[s];
        arr[s] =  arr[e];
        arr[e] =  temp; 
        s++;
        e--;    
    }
}


void printArray(int arr[],int n ){
    for(int i = 0 ; i < n ;i++ ){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    reverseArray(arr,0,n-1);
    printArray(arr,n);
}