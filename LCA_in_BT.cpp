class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {

        TreeNode *temp = root;
        vector<int> V1 , V2;
        while (temp->val != p->val)
        {
            if (temp->val > p->val)
            {
                V1.push_back(temp->val);
                temp = temp->left;
            }
            else if (temp->val < p->val)
            {
                V1.push_back(temp->val);
                temp = temp->right;
            }
        }
        V1.push_back(temp->val);

        temp = root;

        while (temp->val != q->val)
        {
            if (temp->val > q->val)
            {
                V2.push_back(temp->val);
                temp = temp->left;
            }
            else if (temp->val < q->val)
            {
                V2.push_back(temp->val);
                temp = temp->right;
            }
        }
        V2.push_back(temp->val);

        int m = V1.size();
        int n = V2.size();
        int ans;
        int mini = min(m,n);

        for(int i=0;i<mini ; i++)
        {
            if(V1[i]==V2[i])
            {
                ans = V1[i];
            }   
        }
        


       TreeNode* answer = root;
        while (answer && answer->val != ans) {
            if (answer->val > ans) {
                answer = answer->left;
            } else if (answer->val < ans) {
                answer = answer->right;
            }
        }


        return answer;
    }
};
