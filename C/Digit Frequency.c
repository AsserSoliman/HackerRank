#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int y[10]={0};
char x[1005];
scanf("%s",x);
for(int i=0;i<strlen(x);i++){
    if (x[i]=='0')
    y[0]++; 
    if (x[i]=='1')
    y[1]++;
    if (x[i]=='2')
    y[2]++;
    if (x[i]=='3')
    y[3]++;
    if (x[i]=='4')
    y[4]++;
    if (x[i]=='5')
    y[5]++;
    if (x[i]=='6')
    y[6]++;
    if (x[i]=='7')
    y[7]++;
    if (x[i]=='8')
    y[8]++;
    if (x[i]=='9')
    y[9]++;
    
    
    
    
    
    }
 
for(int i=0;i<10;i++)
printf("%d ",y[i]);    


    return 0;
}
