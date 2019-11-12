#include <iostream>

int fill(int **m, int N);

int main(){
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    int N = 5;
    
    int **m;
    m = new int *[N];
    for(int i = 0; i <N; i++)
        m[i] = new int[N];
    
    int **n;
    n = new int *[N];
    for(int i = 0; i <N; i++)
        n[i] = new int[N];
    
    int **mult;
    mult = new int *[N];
    for(int i = 0; i <N; i++)
        mult[i] = new int[N];
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            mult[i][j]=0;
        }
    }
    
    fill(m, N);
    fill(n, N);
    
    for(int i=0; i < N; i++){
        for(int j=0; j < N; j++){
            std::cout<< n[i][j] << " ";
        }
        std::cout<<std::endl;
    }
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int suma=0;
            for(int k=0;k<N;k++){
                suma += m[i][k] * n[k][j];
            }
            mult[i][j]=suma;
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            std::cout<< mult[i][j] << " ";
        }
        std::cout<<std::endl;
    }
    */
    return 0;
}

int fill(int **m, int N){
    for(int i=0; i < N; i++){
        for(int j=0; j < N; j++){
            if(i==0){
                m[i][j] = 2;
                if(j==N-1){
                    m[i][j] = 1-N;
                }
            } else{
                if((i-1)==j){
                    m[i][j]=N+2;
                } else if(j==N-1){
                    m[i][j] = -N;
                } else {
                    m[i][j] = 1;
                }
            }
        }
    }
    return 0;
}
