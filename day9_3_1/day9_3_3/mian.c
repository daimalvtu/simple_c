#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node_s {
	int data;
	struct node_s *pnext;
}node_t,*pnode_t;
void tailinsert(pnode_t *pphead, pnode_t *pptail, int data) {
	pnode_t pnew = (pnode_t)calloc(1, sizeof(node_t));
	pnew->data = data;
	if (*pphead == NULL) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else{
		(*pptail)->pnext = pnew;
		*pptail = pnew;
	}
}
void loop(pnode_t phead) {
	pnode_t ppre = phead;
	pnode_t pcur = phead;
	while (pcur) {
		ppre = ppre->pnext;
		pcur = pcur->pnext;
		pcur = pcur->pnext;
		if (ppre == pcur) {
			fprintf(stderr, "list is loop!\n");
			return;
		}
	}
}
int main() {
	pnode_t phead=NULL;
	pnode_t ptail = NULL;
	for (int i = 0; i < 4; i++) {
		tailinsert(&phead, &ptail, i);
	}
	ptail->pnext = phead;
	loop(phead);
}