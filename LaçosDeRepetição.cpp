#include <iostream>
using namespace std;

// while (expressão lódigo: valor boleano) {
//    seu código que vai ser repetido
// }
// ATENÇÂO: não fazer while(true) se não ira ficar infinito, e a função do while() é ter uma 
// repetição com um ponto de parada.

// ! while 

int main() {

int i = 1;                      // inicialização do contador

   cout << "Início while " << endl;
while (i <= 4) {              //expressão lógica que define a condição de parada    
                              // se a condição não for atendida teremos apenas: INICIO FIM

   cout << "i=" << i << endl;
   i++;                      // incrementar a variavel para ajudar na contagem de vezes do laço
}
   cout << "Fim while " << endl;




// !   do 
// a diferença para o while, é que ele executa pelo menos 1x o trecho que estiver nele, e depois
// passa para as repeições do wili.  
 
 int e = 1;    // inicialização do contador 
              // se a condição de While não for atendida, o do execuita ao menos uma vez o valor
             // de "e" 

cout << "inicio doWhile" << endl;

do {

   cout << "e = " << e << endl;
   e++;                      // só será executado se o While for True (se o valor for <= a 1)

} while (e <= 0);            //expressão lógica que define a condição de parada
  cout << "FIM" << endl;



// ! for 
// É utilizado quando quero controlar a quantidade de execuções com contadores
// contadores ou interatores: são variaveis 
//  
//           for (inicialiação; condiçãoDeExecução; encremento) {
// Exemplo:  for (int i=1; i <= 10; i++)
// a condiçãoDeExeução:  toda vez que for true continua executando

cout << "inicio do for " << endl;

// 1. Primeiro executa a inicialização
// 2. Testar a condição = se for False não executa = cout << "novo i = " << i << endl;  nem = i++
// 3. executa o seu bloco de comando 
// 4. executa o terceiro bloco que é o encremento da variavel 
// 5. volta para e etapa 2 ATÉ que a condição "i<=10" não seja mais atendido, seja FALSE. 

for(int R=1; R <= 10; R++) {         // i é acessivel somente  aqui dentro do for
   
cout << "novo R = " << R << endl;

// cout << "Fim do for " << endl;

}

return 0;

}


//           for 
// for (int i=1; i <=10; i++) {
//   cout << "i = " << i << endl;
//  } 


//         while
// int i=1;
// while (i <= 10) {
//       cout << "i = " << i << endl; 
//       i++;  
// }


//       do 
// int j=1;
// do {
//    cout << "J = " << j << endl;
//    j++;  
// }  (j <= 10)                         ou  while (j <= 10); 