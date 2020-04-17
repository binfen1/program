#include <stdio.h>

//
// Created by 吉树军 on 2020/4/17.
//

#include <stdio.h>
#include <math.h>

typedef struct memory {
    float r5, r3, r2, r1, r0;
    float p1, p2, p3, p4, p5, p;
} lx;

void fun1(lx *s) {
    printf("方案一到期后金额%f\n", s->p1);
    printf("方案二到期后金额%f\n", s->p2);
    printf("方案三到期后金额%f\n", s->p3);
    printf("方案四到期后金额%f\n", s->p4);
    printf("方案五到期后金额%f\n", s->p5);
}

int main() {
    lx s;
    s.p = 1000;
    s.r1 = 0.015;
    s.r2 = 0.021;
    s.r3 = 0.0275;
    s.r5 = 0.03;
    s.r0 = 0.0035;

    s.p1 = s.p * (1 + 5 * s.r5);
    s.p2 = s.p * (1 + s.r2 * 2) * (1 + s.r3 * 3);
    s.p3 = s.p * (1 + s.r3 * 3) * (1 + s.r2 * 2);
    s.p4 = s.p * pow(1 + s.r1, 5);
    s.p5 = s.p * pow(1 + s.r0 / 4, 4 * 5);


    fun1(&s);


    return 0;
}