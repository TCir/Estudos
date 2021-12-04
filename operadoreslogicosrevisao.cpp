#include <iostream>
using namespace std;

int main() {

// "! 
// &&
// || 
//                 False     True        True      // no "E" se a primeiro operação for falsa
bool verdadeiro = 12 > 13 && 14 < 15 && 15 < 16;   // a comparação nem continua.

cout << "verdadeiro = " << verdadeiro << endl;


//         False     Verdadeiro                // no caso do "ou" basta apenas um ser True           
bool ou = 12 < 13 || 14 > 15;                  // para validar, se o primeiro for False
cout << "verdadeiro = " <<  ou << endl;        // ele verifica o segundo sendo True, valida 1


//           False        True  &&     False    True     // como tem o && para na primeira parte
bool ou1 = (12 > 13 || 14 < 15) && ( 12 > 13 && 14 < 15);
cout << "verdadeiro = " <<  ou1 << endl;


//          false       True    ||     False     True   // como é || mesmo a primeira parte
bool ou2 = (12 > 13 || 14 < 15) || ( 12 > 13 && 14 < 15); // sendo false, ele testa a outra parte
cout << "verdadeiro = " <<  ou2 << endl;                  // pois só precisa de um verdadeiro



return 0;    
}