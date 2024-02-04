#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
scanf("%d",&n);
int x[n],i,sum=0;
for(i=0;i<n;i++)
scanf("%d",&x[i]);   
for(i=0;i<n;i++)
sum+=x[i];
printf("%d",sum);


 return 0;
}
