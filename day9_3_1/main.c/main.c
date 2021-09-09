#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node_s {
	int data;
	struct node_s *pnext;
}node_t,*pnode_t;
void headinsert(pnode_t *pphead, pnode_t *pptail, int data) {
	pnode_t pnew = (pnode_t)calloc(1, sizeof(node_t));
	pnew->data = data;
	if (*pphead == NULL) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else {
		pnew->pnext = *pphead;
		*pphead = pnew;
	}
}
void print(pnode_t phead) {
	pnode_t pcur = phead;
	while (pcur) {
		printf("%3d", pcur->data);
		pcur = pcur->pnext;
	}
}
void enter(pnode_t phead) {
	pnode_t ppre = phead;
	pnode_t pcur = phead->pnext;
	while (pcur) {
		ppre = ppre->pnext;
		pcur = pcur->pnext;
		if (pcur) {
			pcur = pcur->pnext;
		}
	}
	printf("%d", ppre->data);
}
int main() {
	pnode_t phead = NULL;
	pnode_t ptail = NULL;
	for (int i = 0; i < 9; i++) {
		headinsert(&phead, &ptail, i);
	}
	enter(phead);
	return 0;
}