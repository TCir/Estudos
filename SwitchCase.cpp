#include <iostream>
using namespace std;


//! Comando:         Switch Case       " select statement "
// É dado uma "ação" para  cada função determinada que aparecer
// Condições que teria muitos if, são resolvidos facilmente com o select statement
// MAS ATENÇÃO, É COM USAR EM CASOS DE IGUALDADE, E NÃO EM INTERVALOS
//             Exemplo a baixo: 
// int idade = 50
// if (idade == 20) {
// if (idade == 21) {
// if (idade == 22) {                  

// O que iria demorar bastante, pense se tiver 100000 condições, teria que fazer um "if" para cada.

int main() {

int idade = 28;
switch (idade) {      // se não tiver o "BREAK" ao final de cada case, vai ser 
                      //  executado todos os casos a começar pelo valor encontrado

    case 20:   // se idade == 20 executa o que estiver aqui. 
    cout << " Você tem muito para aprender " << endl;
    break;     // se não tiver o "BREAK" ao final de cada case, vai ser 

    case 28:
    cout << " Você esta quase chegando nos 30 " << endl;
    break;   // se não tiver o "BREAK" ao final de cada case, vai ser 
    
    case 33: 
    cout << " Faça boas escolhas com tudo que já viveu! " << endl;
    break;

    default:   // se idade for diferente dos valores a cima, executa o que estiver como padrão
    cout << " Você está no lugar errado " << endl; 
   
}



                         // se não tiver o "BREAK" ao final de cada case, vai ser   
int numero = 140;
switch (numero) {

     case 140:
     cout << " Vizinha de baixo " << endl; 

     case 170:
     cout << " Já esta em outro quarteirão " << endl;

     case 210:
     cout << " Esta do outro lado da rua " << endl;

     default:
     cout << " Esta casa nem existe " << endl;
}

   return 0;
}