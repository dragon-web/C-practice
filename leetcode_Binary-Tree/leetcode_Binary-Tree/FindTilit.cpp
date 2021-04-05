#include <iostream>
#include <vector>

using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
   /* int Count(TreeNode* root)  //计算出每个点的度
    {
        if (root == nullptr)
        {
            return 0;
        }
        return ((root->left == nullptr ? 0 : root->left->val) + (root->right == nullptr ? 0 : root->right->val) + root->val);
    }*/
    int Count(TreeNode* root)  //计算出每个点的度
    {
        if (root == nullptr)
        {
            return 0;
        }
        else if (root->left == nullptr && root->right == nullptr)
        {
            return root->val;
        }
        else if (root->left == nullptr)
        {
            return Count(root->right) + root->val;
        }
        else if (root->right == nullptr)
        {
            return Count(root->left) + root->val;
        }
        return Count(root->left) + Count(root->right) + root->val;
    }

    int findTilt(TreeNode* root) {
        if (root == nullptr)
        {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return 0;
        }
        else if (root->left == nullptr)
        {
            return Count(root->right);
        }
        else if (root->right == nullptr)
        {
            int suml =  Count(root->left);
        }
        else {
            cout << "left = " << Count(root->left) << endl;
            cout << "right = " << Count(root->right) << endl;

            return abs(Count(root->left) - Count(root->right)) + findTilt(root->left) + findTilt(root->right);
        }
    }
};

int main()
{
    /*TreeNode a1(21);
    TreeNode a2(7);
    TreeNode a3(14);
    TreeNode a4(1);
    TreeNode a5(1);
    TreeNode a6(2);
    TreeNode a7(2);
    TreeNode a8(3);
    TreeNode a9(3);
    a1.left = &a2;
    a1.right = &a3;
    a2.left = &a4;
    a2.right = &a5;
    a3.left = &a6;
    a3.right = &a7;
    a4.left = &a8;
    a4.right = &a9;*/
    TreeNode a1(1);
    TreeNode a2(2);
    TreeNode a3(3);
    TreeNode a4(4);
    a1.left = &a2;
    a2.left = &a3;
    a2.right = &a4;
    Solution a;
    cout << a.findTilt(&a1) << endl;
    return 0;
}

class Solution {
private:
    int tilt = 0;

    int dfs(TreeNode* root) {
        if (!root) return 0;
        if (!root->left && !root->right) return root->val;
        int sum_left = dfs(root->left);
        int sum_right = dfs(root->right);
        tilt += abs(sum_left - sum_right);
        return sum_left + sum_right + root->val;
    }

public:
    int findTilt(TreeNode* root) {
        dfs(root);
        return tilt;
    }
};