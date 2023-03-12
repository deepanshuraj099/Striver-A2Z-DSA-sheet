class Solution {
public:
    TreeNode* constructBST(vector<int>& nums, int leftIndex, int rightIndex)
    {
        if(leftIndex>rightIndex)
            return nullptr;

        int mid = leftIndex + (rightIndex - leftIndex)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = constructBST(nums, leftIndex, mid-1);
        root->right = constructBST(nums, mid+1, rightIndex);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==0)
            return nullptr;
        if(n==1)
            return new TreeNode(nums[0]);
        return constructBST(nums, 0, n-1);
    }
};