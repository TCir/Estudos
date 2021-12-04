#include <iostream>
using namespace std;



// Usar Desvio Condicional 
// Faça um programa que leia 5 valores inteiros. 
// Conte quantos destes valores digitados são pares e mostre esta informação.
// O arquivo de entrada contém 5 valores inteiros quaisquer.

int main() {



int a, b, c, d, e;    // feito uma declaração de 5 variais 
int qtd = 0;         // Foi atribuido 0 para não ter um valor errado nas somas.

cin >> a >>  b >>  c >>  d >>  e; 
if (a % 2 == 0) {                  // o nome da operação é: se "a mod" for igual a 0
    qtd++;                        // qtd é a variavel que ira fazer a contagem "SE" o número for par
}
if (b % 2 == 0) {
    qtd++; 
}    
if (c % 2 == 0) {
    qtd++; 
}   
if (d % 2 == 0) {
    qtd++; 
}
if (e % 2 == 0) {
    qtd++; 
}         

cout << qtd << " valores pares " << endl;




return 0;
}