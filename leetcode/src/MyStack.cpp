/*
225 Implement Stack using Queues
*/
#include "StdAfx.h"
#include "MyStack.h"


MyStack::MyStack(void)
{
}


MyStack::~MyStack(void)
{
}

void
MyStack::test(int a[], int n)
{
	if (*a == '/0' || a == NULL || n < 1) {
		return;
	}
	
	for (int i = 0; i < n; ++i) {
		push(a[i]);
	}
	
	while(!empty()) {
		cout << top() << "-";
		pop();
	}
	cout << "END" << endl;
}