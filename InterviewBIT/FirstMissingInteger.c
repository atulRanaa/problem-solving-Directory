/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int ans(int* A, int n) {
    int i;
    for(i=0;i<n;i++) {
        int valueAsIndex = abs(A[i]);
        if( valueAsIndex-1 < n && A[ valueAsIndex-1 ] > 0){
            A[ valueAsIndex-1 ] = -A[ valueAsIndex-1 ];
        }
    }
    for(i=0;i<n;i++) {
        if(A[i] > 0) return i+1;
    }
    return i+1;
}
int firstMissingPositive(int* A, int n) {
    int i, j=0;
    int temp;
    for(i=0;i<n;i++){
        if(A[i] <= 0){
            temp = *(A+i);
            *(A+i) = *(A+j);
            *(A+j) = temp;
            
            j++;
        }
    }
    // printf("%d\n", j);
    // for(i=0;i<n;i++) printf("%d ", A[i]);
    return ans((A+j), n-j);
}
