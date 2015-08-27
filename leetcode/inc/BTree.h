#pragma once
struct TreeNode {
    int val;
    TreeNode *left;
	TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	TreeNode(void){}
	~TreeNode(void){}
};

class BTree
{
private:

public:
	TreeNode *root;

	BTree(void);
	~BTree(void);

	void BTree::Create(int *a, int n);
	void Insert(int);

	void Preorder(void);
	void Inorder(void);
	void Postorder(void);

	void Preorder(TreeNode*);
	void Inorder(TreeNode*);
	void Postorder(TreeNode*);

	TreeNode* BTree::InvertTree(TreeNode*);
	TreeNode* InvertTree(void);

	void test(int a[], int n);
};