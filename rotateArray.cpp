#include <stdio.h>
#include <climits>
#include <iostream>
#include <string>

using namespace std;

// //Rotating array to the left side
// void rotateArray(int arr[], int size , int position){
//     int temp[size];


//     //for kepping track of curr index

//     int k = 0 ;

//     //storing the size-d elements first 
//     for(int i = position ; i < size ; i++ ){
//         temp[k]=arr[i];
//         k++;
//     }

//     //now storing the d position of element
//     for(int i = 0 ; i < position; i++){
//         temp[k] = arr[i];
//         k++;
//     }
    
    
//     for(int i=0;i<size;i++){
//         arr[i]= temp[i];
//     }

// }

//second approach

void rotateArray(int arr[],int size , int position){
    int i = 0;
    
    
    int p = 1;

    while(p<=position){
        int last = arr[0];
        for(int j = 0 ; j < size -1;j++){
            arr[j]=arr[j+1];
            
        }
        arr[size-1]= last; 
        p++;
    }
}



     void printArray(int arr[],int size ){
        for (int i =0 ; i < size;i++ ){
            cout << arr[i] << " ";
        }

        cout << " \n";    
    }


int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int position = 3;

    printArray(arr,size);
    rotateArray(arr,size,position);
    printArray(arr,size);
}