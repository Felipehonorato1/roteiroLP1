#include <iostream>
#include <string>

using namespace std;

int main(){
    int maior = 0 ,numdig = -2;
    
    while(numdig !=0 ){
        cin >> numdig; 
        if(numdig>maior){
            maior = numdig;
        }
    }

    cout << maior << endl;
   return 0;
}