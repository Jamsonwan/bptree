#ifndef BPTree_h
#define BPTree_h

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define M (3) // the order of B+ Tree
#define LIMIT_M_2 (M % 2 ? (M+1) / 2 : M / 2)
#define True (1)
#define False (0)

typedef int KeyType; // 关键字的数据类型
typedef int Record; // 索引所对应的值

typedef struct BPTNode{
	int isLeaf;
	int keynum;
	KeyType key[M + 1];
	struct BPTNode *ptr[M + 1];
	struct BPTNode *next;
	Record value[M + 1];
}BPTNode, *BPTree;

typedef struct Result{
	BPTNode *pt;
	int i;
	int tag;
}Result;

extern BPTree Initialize();

extern BPTree Insert(BPTree T, KeyType K, Record V);

extern BPTree Remove(BPTree T, KeyType K);

extern BPTree Destroy(BPTree T);

extern Result* SearchBPTree(BPTree T, KeyType K);

extern void Travel(BPTree T);

#endif
