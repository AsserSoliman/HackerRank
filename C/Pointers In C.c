#include <stdio.h>
#include<math.h>


int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    int *p=&a,*v=&b;
    printf("%d\n%d",(*p+*v),abs((*p-*v)));

    return 0;
}
