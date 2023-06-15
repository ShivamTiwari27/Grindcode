class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        int v = s.size();
        int u = t.size();

        if(v!=u)
            return false;
        
        for (int i=0;i<u;i++)
        {
            if(s[i]!=t[i])
                return false;
        }

        return true;
        
    }
};
