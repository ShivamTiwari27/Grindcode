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



# Solution using hashmap in O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > hash;
        vector<int> answer;
        int f=0;
        for(int i=0;i<nums.size() ;  i++)
        {
            hash[nums[i]] = i;
        }

        for(int i=0;i<nums.size() ;  i++)
        {
            int k = target-nums[i];
            if(hash.find(k)!=hash.end())
            {
                auto it = hash.find(k);
                if(it->second!=i)
                {
                    answer.push_back(i);
                    answer.push_back(it->second);
                    f=1;
                }
            }
            if(f)
                break;
            
        }
        return answer;
    }
    
};
