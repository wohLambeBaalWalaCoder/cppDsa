#include <stdio.h>
#include <climits>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void print_vector(vector<int> nums)
   {   cout<<"\nThe Majority Element is : ";
       for (auto i = nums.begin(); i != nums.end(); ++i)
        {cout<< *i << " ";}
   }
 

vector<int> mjele(vector<int> nums){
    int n = nums.size();

    int c1= 0 , c2 = 0 , num1 = -1,num2 =-1;
    
    for(int i = 0 ; i < n ; ++i){
        if(nums[i]==num1 ){
            c1++;
        }
        else if(nums[i]==num2){
            c2++;
        }
        else if(c1==0){
            
            num1= nums[i];
            c1 = 1;
        }
        else if(c2==0){
            num2= nums[i];   
            c2 = 1;
        }
        else{
            c1--;
            c2--;
        }


    }

    vector<int> ans;
    c1 = 0 , c2 =0 ;

    for(int i =0 ; i < n ; i++){
        if(nums[i]==num1) c1++;
        else if(nums[i]==num2) c2++;
    }


    int ab  = abs(n/3);

    cout << "Num1 is : " << num1 ;

    cout << "\nNum2 is : " << num2 ;

    if(c1 >=  ab){
        ans.push_back(num1);     
    }
    if(c2 >= ab){
        ans.push_back(num2);
    }
    return ans;

}



int main(){
    vector<int> nums{1,1,1,2,2,2,2,2,4,4,4,4,4};

    cout << "The size of Nums vector is : " << nums.size();
    
    cout << "\n"; 

    vector<int> re =  mjele(nums); 
    print_vector(re) ;

}