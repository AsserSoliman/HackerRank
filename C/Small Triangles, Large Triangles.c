
 void sort_by_area(triangle *tr, int n) {
    
    double area[n],s;
    
    for(int i=0;i<n;i++){
        s = (tr[i].a + tr[i].b + tr[i].c ) / 2.0;

        area[i] = sqrt(s * (s - tr[i].a) * (s - tr[i].b) * (s - tr[i].c));
    }
    
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(area[j]>area[j+1])
            {
                double tem =area[j];
                area[j]=area[j+1];
                area[j+1]=tem;
                
                triangle temp =tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=temp;
                
            }
        
}}
}
