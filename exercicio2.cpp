#include <iostream>
#include <string>

using namespace std;


int Verifica(float randomico){
    float numeroDigitado;
    cin >> numeroDigitado;
    if(numeroDigitado==randomico) return 0; 
    if(numeroDigitado>randomico) return 1;
    if(numeroDigitado<randomico) return 2;
}

int main(){

    float ale = rand() % 100;
    int v = -2;
    while(v != 0){
        
         v = Verifica(ale);

        switch (v) {

        case 0: 
        cout << "Parabens, voce acertou! O numero era:  " << ale << endl;
        break;

        case 1:
        cout << "Muito alto!" << endl;
        break;

        case 2:
        cout << "Muito baixo!" << endl;
        break;
        }
    }
    return 0;
}