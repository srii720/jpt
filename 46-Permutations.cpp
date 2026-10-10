class Solution {
private :
void backtrack(vector<int>&nums,vector<vector<int>>&result,vector<bool>&used,vector<int>&current){
    if(current.size()==nums.size()){result.push_back(current);return;}
    for(int i=0;i<nums.size();i++){
        if(used[i])continue;
        used[i]=true;
        current.push_back(nums[i]);
        backtrack(nums,result,used,current);
        current.pop_back();
        used[i]=false;

    }


}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<vector<int>>result;
        std::vector<int>current;
        vector<bool>used(nums.size(),false);
        backtrack(nums,result,used,current);return result;
       
        


        
    }
};