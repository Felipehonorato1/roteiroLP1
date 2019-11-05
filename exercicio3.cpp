#include <iostream>
#include <string>
#include <stdlib.h>   

using namespace std;

int main(){

    int vezes;
    cin >> vezes;
    float l1= 0,l2=0,l3=0,l4=0,l5=0,l6=0;

    for(int i=0;i<vezes;i++){
        int numeroale = rand() % 6;

        if(numeroale == 0 )l1++;
        if(numeroale == 1 )l2++;
        if(numeroale == 2 )l3++;
        if(numeroale == 3 )l4++;
        if(numeroale == 4 )l5++;
        if(numeroale == 5 )l6++;
        
    }
    
    cout << "O lado 1 caiu:  " << l1/vezes * 100 << "% das vezes - " << l1 << endl; 
    cout << "O lado 2 caiu:  " << l2/vezes * 100 << "% das vezes - " << l2<< endl; 
    cout << "O lado 3 caiu:  " << l3/vezes * 100 << "% das vezes - " << l3 << endl; 
    cout << "O lado 4 caiu:  " << l4/vezes * 100 << "% das vezes - " << l4 << endl; 
    cout << "O lado 5 caiu:  " << l5/vezes * 100 << "% das vezes - " << l5 << endl; 
    cout << "O lado 6 caiu:  " << l6/vezes * 100 << "% das vezes - " << l6 << endl; 



    return 0;
}