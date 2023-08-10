#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
vector<vector<int>>ans;
    void helper(vector<int>& candidates, int target ,int cursum, int i, vector<int>temp){
        // base condition
        if(cursum>target){
            return ;
        }
        //bounding condition
        if(i==candidates.size()){
            if(cursum==target){
                ans.push_back(temp);
            }
            return;
        }
        //inclusion 
        cursum=candidates[i];
        temp.push_back(candidates[i]);
        helper(candidates, target ,cursum, i, temp);
        cursum= cursum-candidates[i];
        temp.pop_back();
        //exclusion
        helper(candidates,  target , cursum,  i+1, temp);
  

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        helper(candidates,target,0,0,temp);
        return ans;
        
    }
};
int main(){
    
}