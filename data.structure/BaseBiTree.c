//
// Created by dell on 2019/3/4.
//
#include <stdio.h>
#include <corecrt_malloc.h>
#include <stdlib.h>

typedef struct TElemType {
    int value;
} TElemType;

typedef struct BiTNode {
    char data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

int OVERFLOW = -1;

/**
 * 按前序输入二叉树中节点的值（一个字符）
 * #表示空树，构造二叉链表表示二叉树T
 * @param T
 */
void createBiTree(BiTree *T) {
    char ch;
    scanf("%c", &ch);
    if (ch == '#') {
        *T = NULL;
    } else {
        *T = (BiTree) malloc(sizeof(BiTNode));
        if (!*T) exit(OVERFLOW);

        (*T)->data = ch;
        createBiTree(&(*T)->lchild);
        createBiTree(&(*T)->rchild);
    }
}
