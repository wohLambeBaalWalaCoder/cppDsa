#include <stdio.h>
#include <climits>
#include <iostream>
#include <string>

using namespace std;



int majorityEle(int arr[],int n ){
    int count = 0 ;
    int element = 0 ;

    for(int i = 0 ; i < n; i++ ){
        if(count==0){
            element = arr[i];
        }
        if(arr[i]==element) count += 1;
        else count -= 1;

}
    return element;
}


int main(){
    int arr1[]= {1,3,3,3,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    cout << "The Majority Elemet is " <<majorityEle(arr1,n);
}