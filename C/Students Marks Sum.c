
int marks_summation(int *x,int y,char z)
{
    int sum=0,i;
    if(z=='g')
    i=1;
    else i=0;
    for(i;i<y;i+=2)
    sum+=x[i];
    
    return sum;
        
}

