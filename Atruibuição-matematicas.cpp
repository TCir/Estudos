#include <iostream>
using namespace std;

int main() {
 
 int idade = 50;

 idade = 33;
cout << idade << endl;

 bool verdade = false;
cout << verdade << endl;

char letra = 'T';
cout << letra  << endl;

letra = 'M';
cout << letra << endl;          // só ira imprimir o que estiver dentro de cout<<  << endl; 
 
int sala = 313;
int room = 312;
 
 
cout << "Número da minha sala " << sala << endl;
cout << "Sala ao lado " << room << endl;    // é importante ter um espaço entre "" e o numero 

// + soma
// - subtração
// *  multiplicação
// / divisão
// % resto da divisão 
// () alterar precedencia 


int idades = 23 + 10; 
cout << idades << endl;

double variavel1 = 25.2;     // para números 
double variavel2 = 3.1431;
int variavel3 = 8;
double resultado = variavel1 + variavel2 - 14.475 / variavel3;  
cout << resultado << endl;  // se tenho dúvidas sobre a precedencia uso () para garantir

int variavel4 = 15;
int variavel5 = 4;
float resultado2 = variavel4 / variavel5;  // o resultado será apenas o número inteiro 3, e
cout << resultado2 << endl;                // não mostrara as casas depois do . por ser os dois
                                          // int. Para parecer um dos dois precisa ser float ou double


int variavel6 = 16;
double variavel7 = 7; 
double resultado3 = variavel6 / variavel7;  //agora tenho um resultado com valor decimal. 
cout << resultado3 << endl;              // se coloco "int resultado3" não tenho o valor decimal

// int resto = variavel1 %  variavel7; dará erro porque as duas variaveis precisa ser int 
int resultado4 = variavel4 / variavel3;  // estou fazendo a divisão de 15/8 
int resto = variavel4 % variavel3;       // quero saber o resto da divisão 15/08 
cout << "Resultado " << resultado4 << endl;
cout << "Restou " << resto << endl;
                                              // Dúvidas voltar na aula #17 
return 0;
 

}