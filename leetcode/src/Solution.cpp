/*
226 Invert Binary Tree
*/

#include "StdAfx.h"
#include "Solution.h"


Solution::Solution(void)
{
}


Solution::~Solution(void)
{
}

TreeNode* 
Solution::invertTree(TreeNode* root) {
    if (root == NULL) {
		return NULL;
	}
	TreeNode* l = root->left;
	TreeNode* r = root->right;

	root->left   = r;
	root->right  = l;

	if (l) {
		invertTree(l);
	}
	if (r) {
		invertTree(r);
	}

	return root;
}

void 
Solution::test(int a[], int n) {
	
	if (*a == '/0' || a == NULL || n < 1) {
		return;
	}

	BTree bt;
	//int a[] = {4, 2, 1, 3, 7, 6, 9};
	//int n = sizeof(a) / sizeof(a[0]);
	bt.Create(a, n);
	
	Solution slt;
	bt.Inorder();
	slt.invertTree(bt.root);
	bt.Inorder();
}