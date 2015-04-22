/* TP2 CALCULAR NUMERO PAR
 * MARTIN DANIEL AGUEL
 * 20150420
 */

#include <iostream>
using namespace std;

int main()
{
int n;
int resultado;

cout <<"Ingrese un numero para conocer si es PAR o IMPAR" << endl;
cin >> n;

resultado = n % 2;

if(resultado == 0)
cout <<"El numero es PAR" << endl;
else
cout <<"El numero es IMPAR" << endl;

}
