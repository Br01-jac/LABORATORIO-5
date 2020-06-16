#include "iostream"
#include "conio.h"
using namespace std;
bool bisiesto(int numero);
int main()
{
    //INGRESAR UN AÑO.
    cout << "CALCULAR SI UN AÑO ES BISIESTO O NO LO ES." << endl
         << endl;
    cout << "Ingrese un año: ";
    int numero;
    cin >> numero;
    if(bisiesto(numero))
    cout<<"El año es Bisiesto."<<endl;
    else cout<<"El año no es Bisiesto"<<endl;

    system("pause");
    getch();
    return 0;
}
bool bisiesto(int numero){
if(numero % 4 != 0) return false;
else if(numero%100 != 0) return true;
else if(numero%400 !=0) return false;
else return true;


}