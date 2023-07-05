#include <stdio.h>
#include <climits>
#include <iostream>
#include <string>
#include <vector>


using namespace std;



int longestOnes(vector<int> nums){
    int n = nums.size();

    int i =0 , j=0 , zeroCount = 0 , ans = 0;

    while(j < n){
        if(nums[j]==0){
            zeroCount++;
        }
        if(zeroCount > 1){
            while (zeroCount > 1)
            {
            if(nums[i]==0){
                zeroCount--;
            }    
            i++;
            }           
        }
        else{
            ans = max(ans,j-i);
        }
        j++;
    }

    return ans;
}

int main(){

    vector<int> nums{1,1,0,1,1};


    int re = longestOnes(nums);

    cout << "The Longest SubArray of Ones is " << re ;
}