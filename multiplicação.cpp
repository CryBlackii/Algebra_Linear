#include <iostream>

using namespace std;

#define L1 3
#define C1 3
#define L2 3
#define C2 3
#define L3 3
#define C3 3

void multiplicacao_matriz(){
    int MatrizA[L1][C1], MatrizB[L2][C2];
    int produto[L3][C3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    
    cout << "insira sua matriz A: " << endl;
    for(int i = 0; i < L1; i++){
        for(int j = 0; j < C1; j++){
            cin >> MatrizA[i][j];
        }
    }
    
    cout << "insira sua matriz B: " << endl;
    for(int i = 0; i < L2; i++){
        for(int j = 0; j < C2; j++){
            cin >> MatrizB[i][j];
        }
    }
    
    cout << endl << "Resultado: " << endl << endl;
    for (int li = 0; li < 3; li++) {
        for (int col = 0; col < 3; col++) {
            for (int inter = 0; inter < 2; inter++) {
                produto[li][col] += MatrizA[li][inter] * MatrizB[inter][col];
            }
            cout << produto[li][col] << "  ";
        }
        cout << "\n";
    }
}

int main(){
    multiplicacao_matriz();
    getchar();
    
    return 0;
}


