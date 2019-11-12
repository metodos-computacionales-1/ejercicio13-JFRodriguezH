#include <iostream>


int main(){
    int m[2][2] = {{2,2},{3,3}};
    int n[2][2] = {{1,1},{5,5}};
    int f_m = 2;
    int c_m = 2;
    int f_n = 2;
    int c_n = 2;
    int mult[f_m][c_n];
    for(int i=0; i < f_m; i++){
        for(int j=0; j < c_n; j++){
            mult[i][j]=0;
        }
    }
    
    for(int i=0; i < f_m; i++){
        for(int j=0; j < c_n; j++){
            std::cout<< mult[i][j] << " ";
        }
        std::cout<<std::endl;
    }
    
    for(int i=0;i<f_m;i++){
        for(int j=0;j<c_n;j++){
            int suma=0;
            for(int k=0;k<c_m;k++){
                suma += m[i][k] * n[k][j];
            }
            mult[i][j]=suma;
        }
    }
    
    for(int i=0; i < f_m; i++){
        for(int j=0; j < c_n; j++){
            std::cout<< mult[i][j] << " ";
        }
        std::cout<<std::endl;
    }
    return 0;
}