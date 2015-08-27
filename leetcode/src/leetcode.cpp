// leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


void TestMyStack(void);
void TestSolutionInvert(void);

int _tmain(int argc, _TCHAR* argv[])
{
	TestMyStack();
	TestSolutionInvert();

	system("pause");
	return 0;
}

void TestMyStack(void)
{
	int a[] = {5, 4, 3, 2, 1};
	MyStack s;
	s.test(a, 5);
}

void TestSolutionInvert(void)
{
	int a[] = {5, 4, 3, 2, 1};
	Solution slt;
	BTree bt;
	bt.Create(a, 5);
	bt.Inorder();
	slt.invertTree(bt.root);
	bt.Inorder();
	bt.InvertTree();
	bt.Inorder();
}