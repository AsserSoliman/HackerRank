#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{

    int n;
    scanf("%d", &n);

    int size = n*2-1;

    int x[size][size];

    int start = 0 , end = size;

    for(int k = 0 ; k < n ; k++)
    {
        for (int i = start ; i < end ; i++)
        {
            for(int j = start ; j < end ; j++)
            {
                       x[i][j] = n - k;
            }
        }
        start++;
        end--;
    }

    for (int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    return 0;

}
