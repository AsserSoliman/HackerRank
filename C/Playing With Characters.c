#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{char x,y[100],z[100];
scanf("%c",&x);
scanf("%s",y);
scanf("\n");
scanf("%[^\n]%*c",z);
printf("%c\n",x);
printf("%s\n",y);
printf("%s",z);



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
