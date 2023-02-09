#include <stdio.h>
#include <stdlib.h>

int main(){

    int m1[3][5] = {{1,1,1,1,1},{5,5,5,5,5},{1,2,3,4,5}};
    int m2[3][5] = {{2,2,2,2,2},{4,4,4,4,4},{5,4,3,2,1}};
    int m_soma[3][5];

    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            m_soma[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            if (j==0){printf("{%d, ", m_soma[i][j]);}
            else{
                if(j==4){printf("%d}\n", m_soma[i][j]);}
                else{printf("%d, ", m_soma[i][j]);}
            }
        }
    }

    return 0;
}
