#include <stdio.h>

void update(int *a,int *b) {
    int c=*a;
    // Complete this function 
    *a=*a+*b;
    int diff=c-*b;
    *b=diff;

    if (*b<0){
        *b=*b *-1;
    }


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


