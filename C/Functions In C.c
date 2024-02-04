#include <stdio.h>

int ma(int a, int b){
    if(a>b)
    return a;
    return b;
}


int main() {
    int max,ans,i,x[5];
    for(i=0l;i<4;i++)
    scanf("%d",&x[i]);
    max=x[0];
    for(i=0;i<4;i++)
        max=ma(max,x[i]);
    printf("%d",max);
    
    return 0;
}
