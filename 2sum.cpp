# Solution in O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int flag=0;
        for(int i=0;i<nums.size() ;  i++)
        {
            for(int j=i+1;j<nums.size() ; j++)
            {
                if(nums[i]+nums[j]== target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                    flag = 1;
                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        return answer;
    }
    
};
