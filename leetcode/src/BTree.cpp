/*
a simple binary tree
*/

#include "StdAfx.h"


using namespace std;

BTree::BTree(void)
{
	BTree::root = NULL;
}


BTree::~BTree(void)
{
}

void BTree::Insert(int x)
{
	TreeNode *nd = new TreeNode;
	if (!nd) {
		return;
	}
	nd->val = x;
	nd->left = nd->right = NULL;

	if (root == NULL) {
		root = nd;
	} else {
		TreeNode *back;
		TreeNode *curt = root;
		
		while (curt) {
			back = curt;
			if (curt->val > x) {
				curt = curt->left;
			} else {
				curt = curt->right;
			}
		}

		if (back->val > x) {
			back->left = nd;
		} else {
			back->right = nd;
		}
	}
}

void BTree::Create(int *a, int n)
{
	for (int i = 0; i < n; ++ i) {
		Insert(a[i]);
	}
}

void BTree::Preorder(TreeNode* T)
{
	if (T) {
		cout << T->val << "\t";
		Preorder(T->left);
		Preorder(T->right);
	}
}

void BTree::Preorder()
{
	cout << "Preoder  :\t";
	Preorder(root);
	cout << endl;
}

void BTree::Inorder(TreeNode* T)
{
	if (T) {		
		Inorder(T->left);
		cout << T->val << "\t";
		Inorder(T->right);
	}
}

void BTree::Inorder()
{
	cout << "Inoder   :\t";
	Inorder(root);
	cout << endl;
}

void BTree::Postorder(TreeNode* T)
{
	if (T) {		
		Postorder(T->left);		
		Postorder(T->right);
		cout << T->val << "\t";
	}
}

void BTree::Postorder()
{
	cout << "Postorder:\t";
	Postorder(root);
	cout << endl;
}

TreeNode* BTree::InvertTree(TreeNode* T)
{
	if (T == NULL) {
		return NULL;
	}
	TreeNode* l = T->left;
	TreeNode* r = T->right;

	T->left   = r;
	T->right  = l;

	if (l) {
		InvertTree(l);
	}
	if (r) {
		InvertTree(r);
	}

	return T;
}

TreeNode* BTree::InvertTree()
{
	return InvertTree(root);
}

void BTree::test(int a[], int n) {
	
	if (*a == '/0' || a == NULL || n < 1) {
		return;
	}

	BTree bt;
	bt.Create(a, n);
	bt.Inorder();
	bt.Preorder();
	bt.Postorder();
}