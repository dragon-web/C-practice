#pragma once
#include"common.h"

typedef struct BinTreeNode
{
	DataType data;
	struct BinTreeNode* LeftChild;
	struct BinTreeNode* RightChild;
}BinTreeNode;//创建节点

typedef struct Bintree
{
	BinTreeNode* root;
}BinTree;

void BinTreeInit(BinTree* t);
void BinTreeCreat_1(BinTreeNode** t);
BinTreeNode* BinTreeCreate_2();
void BinTreeCreate(BinTree* t);
BinTreeNode* _BinTreeCreateByStr(char *str, int *i);
void BinTreeCreateByStr(BinTree *t, char *str, int *i);

//二叉树遍历 递归
void _PreOrder(BinTreeNode *t);
void PreOrder(BinTree *t);
void _InOrder(BinTreeNode *t);
void InOrder(BinTree *t);
void _PostOrder(BinTreeNode *t);
void PostOrder(BinTree *t);
void _LevelOrder(BinTreeNode *t);
void LevelOrder(BinTree *t);
//二叉树遍历 非递归形式
void _PreOrderNoR(BinTreeNode *t);
void PreOrderNoR(BinTree *t);
void _InOrderNoR(BinTreeNode *t);
void InOrderNoR(BinTree *t);
void _PostOrderNoR(BinTreeNode *t);
void PostOrderNoR(BinTree *t);







void BinTreeCreat_1(BinTreeNode** t)//记住我们传的是树根的地址，这个**你应该知道了奥
{
	DataType item;
	scanf("%c", &item);
	if (item == '#')
	{
		*t = NULL;
	}
	else
	{
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(*t != NULL);
		(*t)->data = item;
		BinTreeCreat_1(&((*t)->LeftChild));
		BinTreeCreat_1(&((*t)->RightChild));
	}
}

BinTreeNode* BinTreeCreate_2()
{
	DataType item;
	scanf("%c", &item);
	if (item == '#')
	{
		return NULL;
	}
	else
	{
		BinTreeNode* p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(p != NULL);
		p->data = item;
		p->LeftChild = BinTreeCreate_2();
		p->RightChild = BinTreeCreate_2();
		return p;
	}
}
void BinTreeCreate(BinTree* t)
{
	(*t).root = BinTreeCreate_2();
}
void PreOrder(BinTree *t)
{
	_PreOrder(t->root);
}
void _PreOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		printf("%c ", t->data);
		_PreOrder(t->LeftChild);
		_PreOrder(t->RightChild);
	}
}
//采用栈的形式做非递归遍历
void PreOrder(BinTree * t)
{
	_PreOrderNoR(t->root);
}  
void _PreOrderNoR(BinTreeNode *t)
{
	stack <BinTreeNode*> s;
	BinTreeNode* p;
	if (t != NULL)
	{
		s.push(t);
		while (!s.empty())
		{
			p = s.top();
			s.pop();
			printf("%c ", p->data);
			if (p->RightChild != NULL)//为啥是这个顺序呢？后进栈的在栈顶
			{
				s.push(p->RightChild);
			}
			if (p->LeftChild != NULL)
			{
				s.push(p->LeftChild);
			}
		}
	}
}
//中序遍历
//递归形式
void InOrder(BinTree *t)
{
	_InOrder(t->root);
}
void _InOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		_InOrder(t->LeftChild);
		printf("%c ", t->data);
		_InOrder(t->RightChild);
	}
}
void _InOrderNoR(BinTreeNode *t)
{
	BinTreeNode* p;
	stack<BinTreeNode*>dp;
	do
	{
		while (t != NULL)
		{
			dp.push(t);
			t = t->LeftChild;
		}
		p = dp.top();
		dp.pop();
		printf("%c ", p->data);
		if (p->RightChild != NULL)
			t = p->RightChild;
	} while (!dp.empty() || t != NULL);

}
void InOrderNoR(BinTree *t)
{
	_InOrderNoR(t->root);
}

void _PostOrderNoR(BinTreeNode *t)
{
	if (t != NULL)
	{
		BinTreeNode*p, *prev = NULL;
		stack<BinTreeNode*> dq;
		do
		{
			while (t != NULL)
			{
				dq.push(t);
				t = t->LeftChild;
			}
			p = dq.top;
			if (p->RightChild == NULL || p->RightChild == prev)
			{
				dq.pop();
				printf("%c ", p->data);
				prev = p;
			}
			else {
				t = p->RightChild;
			}
		} while (!dq.empty());
	}
}
void PostOrderNoR(BinTree *t)
{
	_PostOrderNoR(t->root);
}

void PostOrder(BinTree *t)
{
	_PostOrder(t->root);
}
void _PostOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		_PostOrder(t->LeftChild);
		_PostOrder(t->RightChild);
		printf("%c ", t->data);
	}
}
