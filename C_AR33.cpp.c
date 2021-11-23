#include <iostream>  
using namespace std;  
  
int main() {    
    int N, M;  
    while(cin >> N >> M)  
    {  
        if(N == 0 || M == 0)  
        {  
            break;  
        }  
        else  
        {  
            int matrix[N][M];  
            int matrix_t[M][N];  
            for(int i = 0;i < N;i++)  
            {  
                for(int j = 0;j < M;j++)  
                {  
                    cin >> matrix[i][j];  
                    matrix_t[j][i] = matrix[i][j];  
                }  
            }  
            for(int i = 0;i < M;i++)  
            {  
                for(int j = 0;j < N;j++)  
                {  
                    if(j != 0)  
                    {  
                        cout << " " << matrix_t[i][j];  
                    }  
                    else  
                    {  
                        cout << matrix_t[i][j];  
                    }  
                }  
                cout << endl;  
            }  
        }  
    }  
    return 0;  
} 