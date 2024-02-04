#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char x[10000];
    scanf("%[^\n]c",x);
    for(int i=0;i<strlen(x);i++){
        if(x[i]==' ')
            printf("\n");
        else printf("%c",x[i]);
        
        
    }
    return 0;
}
