#include "iostream"
#include "conio.h"
using namespace std;
//CALCULAR HORA
int main(void){
int hh,mm,ss,ss1;
cout<<"CALCULAR HORA FORMATO 24 HORAS:\n\n";
cout<<"Ingrese hora: ";
cin>>hh;
cout<<"Ingrese minutos: ";
cin>>mm;
cout<<"Ingrese segundos: ";
cin>>ss;


cout<<"La hora ingresada es: "<<hh<<":"<<mm<<":"<<ss<<"."<<endl;
cout<<"La hora un segundo despues es: "<<hh<<":"<<mm<<":"<<ss+1<<"."<<endl;


system("pause");
getch();
return 0;
}


