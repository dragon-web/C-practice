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

stack <BinTreeNode*> s;
void PreOrder(BinTree *tss
{



}
void _PreOrderNoR(BinTreeNode *t)
{



}