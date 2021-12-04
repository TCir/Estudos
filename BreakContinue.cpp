#include <iostream>
using namespace std;


int main() {
              // ! o break e o continue pode ser usando nos laços for, while e dowhile e outras situações

// Comando         Break
//  É literalmente para quebrar a continuidade de um comando, antes mesmo da condição
// do laço de repeticão ser False. 
   cout << "Testando o Break " << endl;
for (int t=1; t <= 20; t++) {    //
   cout << t << endl;
   
   if (t == 12) break;        // Basta usar uma condição "if" e dizer até quando quero que vá.
}                      // Mas posso utilizar uma interrupção na condição de parada.


// Comado        Continue
// Ignora/ Pula tudo que esta a baixo dele, e volta para a outra sessão  

  cout << " Escrito a cima do for, aparece antes " << endl; // como aesta fora do for, vai vir antes da condição que o for irá mostrar

for (int m = 2; m < 20; m++) {

    cout << " Antes " << endl;

    if (m == 14) {
        cout << " Pulou " << endl; // 
        continue;                     // quando chegar na condição é: m = a 14, não ira mostrar 14
    }                                 // ou seja não terá: cout << m << endl; 
    cout << m << endl;               // e não ira mostrar: cout << " Depois " << endl;
                                     //  volta mostrando a proxima execução: Antes/ 15/ depois normalmente.
    cout << " Depois " << endl;



}





   















    return 0;
}