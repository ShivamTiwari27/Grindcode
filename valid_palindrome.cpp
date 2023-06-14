class Solution {
public:
    bool isPalindrome(string s) {
        int k = s.length();
        char Arr[k];
        int t=0;

        for(int i=0;i<k;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(isupper(s[i]))
                    Arr[t++] = tolower(s[i]);
                else
                    Arr[t++]=s[i];
            }
        }



        for(int j=0;j<t;j++)
        {
            if(Arr[j]!=Arr[t-j-1])    
                return false;
        }
        return true;
    }
};
