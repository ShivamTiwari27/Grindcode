class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;


        for (int i=0;i<s.size();i++)
        { 
            if(s1.empty())
                s1.push(s[i]);

            else if( s[i]==')' && s1.top()=='(')
            {
                s1.pop();
            }  

            else if(s[i]=='}'  && s1.top()=='{')
            {
                s1.pop();
            }    
            
            else if (s[i]==']'  && s1.top()=='[')
            {
                s1.pop();
            }    
            else 
                s1.push(s[i]);
        }

        if(s1.empty())
            return true;
        else
            return false;        
    }
};
