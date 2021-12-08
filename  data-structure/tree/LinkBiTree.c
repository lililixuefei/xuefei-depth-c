//
// Created by xuefei on 2021/12/8.
//

#include <stdio.h>
#include <stdlib.h>

#define TElemType int
typedef struct BiTNode1 {
    TElemType data;//数据域
    struct BiTNode1 *lchild, *rchild;//左右孩子指针
} BiTNode, *BiTree;

void CreateBiTree(BiTree *T) {
    *T = (BiTNode *) malloc(sizeof(BiTNode));
    printf("%p\n", *T);
    (*T)->data = 1;
    (*T)->lchild = (BiTNode *) malloc(sizeof(BiTNode));
    (*T)->lchild->data = 2;
    (*T)->rchild = (BiTNode *) malloc(sizeof(BiTNode));
    (*T)->rchild->data = 3;
    (*T)->rchild->lchild = NULL;
    (*T)->rchild->rchild = NULL;
    (*T)->lchild->lchild = (BiTNode *) malloc(sizeof(BiTNode));
    (*T)->lchild->lchild->data = 4;
    (*T)->lchild->rchild = NULL;
    (*T)->lchild->lchild->lchild = NULL;
    (*T)->lchild->lchild->rchild = NULL;
}

void CreateBiTree1(BiTNode *T) {
//    T = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->data = 1;
    (T)->lchild = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->lchild->data = 2;
    (T)->rchild = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->rchild->data = 3;
    (T)->rchild->lchild = NULL;
    (T)->rchild->rchild = NULL;
    (T)->lchild->lchild = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->lchild->lchild->data = 4;
    (T)->lchild->rchild = NULL;
    (T)->lchild->lchild->lchild = NULL;
    (T)->lchild->lchild->rchild = NULL;
}

void CreateBiTree2(BiTNode *T) {
//    T = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->data = 1;
    (T)->lchild = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->lchild->data = 2;
    (T)->rchild = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->rchild->data = 3;
    (T)->rchild->lchild = NULL;
    (T)->rchild->rchild = NULL;
    (T)->lchild->lchild = (BiTNode *) malloc(sizeof(BiTNode));
    (T)->lchild->lchild->data = 4;
    (T)->lchild->rchild = NULL;
    (T)->lchild->lchild->lchild = NULL;
    (T)->lchild->lchild->rchild = NULL;
}

int main() {
//    BiTree Tree;
//    CreateBiTree(&Tree);
//    printf("%d", (Tree)->lchild->lchild->data);


//
//    BiTNode *biTNode  = (BiTNode *) malloc(sizeof(BiTNode));
//    CreateBiTree1(biTNode);
//    printf("%d", (biTNode)->lchild->lchild->data);


    BiTNode biTNode2;
    CreateBiTree2(&biTNode2);
    printf("%d", biTNode2.lchild->lchild->data);
    printf("%d", (&biTNode2)->lchild->lchild->data);


    return 0;
}