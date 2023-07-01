class Solution {
public:
    string addBinary(string a, string b) {

        int m = a.size();
        int n = b.size();
        int ans1=0 , ans2 =0;

        for(int i = m-1;i>=0;i--)
        {
            if(a[i]=='1')
                ans1+=pow(2,m-1-i);   
        }
        for(int i = n-1;i>=0;i--)
        {
            if(b[i]=='1')
                ans2+=pow(2,n-1-i);   
        }

        int ans = ans1+ans2;

        // cout<<ans1<<ans2;
        
        int t=0;
        vector<int> vec;
        string str;

        if(ans==0)
            str.push_back('0');

        else{

            while(ans>0)
            {
                int k = ans%2;
                vec.push_back(k);
                ans = ans/2;
            }

            int l=vec.size();
            

            reverse(vec.begin() , vec.end());
            for(int i=0;i<l;i++ )
            {
                if(vec[i]==1)
                    str.push_back('1');
                else if(vec[i]==0)
                    str.push_back('0');
            }

        }
        return str;
        
    }
};
