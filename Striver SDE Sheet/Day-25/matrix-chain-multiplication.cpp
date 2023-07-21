
class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        int m[N][N];
        for(int i=0;i<N;i++){
            m[i][i]=0;
        }
        for(int l=2;l<N;l++){
            for(int i=1;i<N-l+1;i++){
                int j=i+l-1;
                m[i][j]=INT_MAX;
                for(int k=i;k<=j-1;k++){
                    int q=m[i][k]+m[k+1][j]+arr[i-1]*arr[k]*arr[j];
                    if(q<m[i][j]){
                        m[i][j]=q;
                    }
                }
            }
        }
        return m[1][N-1];
    }
};