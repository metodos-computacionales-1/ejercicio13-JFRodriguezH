#include <iostream>

int producto(int m[][2], int n[][2]);

int main(){
    int m[2][2] = {{2,2},{3,3}};
    int n[2][2] = {{1,1},{5,5}};

    producto(m,n);
    for(int i=0; i<2;i++){
        for(int j=0; j<2; j++){
            std::cout<< m[i][j] << " ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

int producto(int m[][2], int n[][2]){
    int f_m = 2;
    int c_m = 2;
    
    int f_n = 2;
    int c_n = 2;
    
    for(int i=0;i<f_m;i++){
        for(int j=0;j<c_n;j++){
            int suma = 0;
            for(int k=0;k<c_m;k++){
                suma += m[i][k]*n[k][j];
            }
            m[i][j] = suma;
        }
    }
    
    return 0;
}