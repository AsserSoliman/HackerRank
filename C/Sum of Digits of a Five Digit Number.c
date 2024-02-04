#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,z=0;
    scanf("%d", &n);
while   (n!=0){
    z+=n%10;
    n/=10;
}
printf("%d",z);




return 0;
}
