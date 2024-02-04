#include <stdio.h>

int main (void){
    
    int i,j,x,y,mor=0,mand=0,mxor=0;
    scanf("%d %d",&x,&y);

    for(i=1;i<=x;i++)
        for(j=i+1;j<=x;j++){
            if((i & j) > mand && (i & j) < y)
                mand=(i&j);
            if((i | j) > mor && (i | j ) < y)
                mor=(i|j);
            if((i ^ j) > mxor && (i ^ j ) < y)
                mxor=(i^j);            
        }
        
        printf("%d \n%d \n%d",mand,mor,mxor);
}
