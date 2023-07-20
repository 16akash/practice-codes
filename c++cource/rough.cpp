#include<iostream>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
        int k;
        for(int i=0;i<nums.size();i++){
            if(target==0){
                k=0;
            }
            if(nums[i]==target){
                k=i;
            }
            else if(target>nums[i] && target<nums[i+1]){
                k=i+1;
            }
            else{
                k=nums.size()+1;
            }
        }
    
        return k;
    }
    
};

int main(){
    
    return 0;
}