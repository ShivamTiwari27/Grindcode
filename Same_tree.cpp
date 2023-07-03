class Solution {
public:

    int k;
    int travelOfTree(TreeNode*p , TreeNode*q)
    {
        if(p==NULL && q==NULL)
            return 0;
        else if((p==NULL && q!=NULL) || (p!=NULL && q==NULL))
            return -1;
        

        else if(p!=NULL && q!=NULL)
        {
            if(p->val!=q->val)
            {
                return -1;
            }
        }



        int L = travelOfTree(p->left , q->left);
        if(L == -1)
            return -1;

        int R = travelOfTree(p->right , q->right);
        if(R == -1)
            return -1;

        return max(L,R)+1;

    }



    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        k = travelOfTree(p,q);
        if(k==-1)
            return false;
        else
            return true;
    }
};
