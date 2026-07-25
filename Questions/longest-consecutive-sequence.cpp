//https://leetcode.com/problems/longest-consecutive-sequence/description/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        for(int i=0;i<nums.size();i++){
            numSet.insert(nums[i]);
        }
        int longest = 1;
        for(auto it: numSet){
            //element should be starting number of seq 
            //if we find smaller will cover under smaller number seq check
            if(numSet.find(it - 1) == numSet.end()){
                int count = 1;
                //starting element of seq
                int x = it;
                while(numSet.find(x + 1) != numSet.end()){
                    count += 1;
                    x += 1;
                }
                longest = max(longest, count);
            } 
        }
        return longest;
    }
};