#include <stdio.h>
#include <climits>
#include <iostream>
#include <string>

using namespace std;

void minmax(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }  
        
    }
    cout << "Maximum Value is = " << max << "\n";
    cout << "Minimum Value is = " << min;

}

int main()
{
    int arr[] = {1, 4, 5, 7, 8};
    int n = 5;

   minmax(arr, n);
    
}