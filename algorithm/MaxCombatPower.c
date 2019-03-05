//
// Created by dell on 2019/3/5.
//

#include<stdio.h>
#include<string.h>

int a[10010];
int max;

void muti(int n) {
    int i;
    for (i = 0; i < max; i++) {
        a[i] = a[i] * n;
    }
    for (i = 0; i < max; i++) {
        if (a[i] >= 10) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        if (a[max])
            max++;
    }
}

int notMain() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, c, k, i;
        memset(a, 0, sizeof(a));
        a[0] = 1;
        max = 1;
        scanf("%d", &n);
        if (n < 4) {
            printf("%d\n", n);
            continue;
        }
        k = n % 3;
        c = n / 3;
        if (k == 1) {
            k = 4;
            c--;
        }
        for (i = 0; i < c; i++) {
            muti(3);
        }
        if (k) {
            muti(k);
        }
        for (i = max - 1; i >= 0; i--) {
            printf("%d", a[i]);
        }
        printf("\n");
    }
}