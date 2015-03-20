class Solution{
    public:
        double findKth(int A[], int m, int B[], int n, int k){
            if(m == 0)
                return B[k-1];
            if(n == 0)
                return A[k-1];
            if(k == 1)
                return min(A[0], B[0]);

            int i = min(k/2, m), j = min(k/2, n);

            if(A[i-1] < B[j-1]){
                return findKth(A+i, m-i, B, n, k-i)
            }else{
                return findKth(A, m, B+j, n-j, k-j);
            }
        }

        double findMedianSortedArrays(int A[], int m, int B[], int n){
            assert(m + n > 0);

            if((m + n)%2 == 1){
                return findKth(A, m, B, n, (m+n+1)/2);
            }else{
                return (double)((findKth(A, m, B, n, (m+n)/2)) + findKth(A, m, B, n (m+n)/2+1))/2;
            }
        }

};
