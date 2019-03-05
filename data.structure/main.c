//
// Created by dell on 2019/3/4.
//
#include <stdio.h>
#include <corecrt_malloc.h>

typedef struct Node {
    int val;
    int isThread;
} BiNode, *BiTree;


int main(int argc, char **argv) {
    BiNode *biNode = (BiTree) malloc(sizeof(BiNode));
    biNode->isThread = 1;
    biNode->val = 3;

    printf("%d\n", biNode->val);
    if (biNode->isThread) {
        printf("%s", "is thread");
    }
}