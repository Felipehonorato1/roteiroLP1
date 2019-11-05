#include <iostream>
#include <string>

using namespace std;

int main(){
    float camisa[23] = {0};
    int voto = -2;
    int contagem = 0;
    int maior;

    while(voto!=0){
        cin >> voto;
        if(voto == 0) break;
        if(voto < 0 || voto > 23 ) cout << "Voto invalido!" << endl;
        camisa[voto]++;
        contagem++;
        
    }
        cout << "Total de votos computados: " << contagem << endl;
        for(int i=0;i<23;i++){
            if (camisa[i] != 0) cout << "Jogador camisa " << i << " recebeu " << camisa[i] << " votos" << endl;
        }

        for(int i=0;i<23;i++){
            if(camisa[i] !=0 ) cout << "Jogador camisa " << i << " recebeu " << camisa[i]/contagem *100<< "% dos votos" << endl;
          }

        for(int i=0;i<23;i++){
            if(camisa[i] > camisa[i+1]) maior = i;
            
        }
        cout << "O jogador mais votado foi o camisa " << maior << " com " << camisa[maior]/contagem*100 << "% dos votos" << endl;

    return 0;
}
