class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]!=0)
            {
                vec.push_back(nums[i]);

            }
        }
        int k = nums.size() - vec.size();
        for(int i=0;i<k;i++)
            vec.push_back(0);

        nums.resize(0);

        copy(vec.begin(), vec.end(), back_inserter(nums)) ;
        return ;
    }
};
