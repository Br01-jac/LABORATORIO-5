#include "iostream"
#include "conio.h"

using namespace std;

int main(void)
{
int dd,mm,aa;
cout<<"Ingrese año: ";
cin>>aa;
cout<<"Ingrese numero de mes: ";
cin>>mm;
cout<<"Ingrese dia: ";
cin>>dd;

if(dd>31|| mm>12){
    cout<<"la fecha es incorrecta."<<endl;
    return 0;
   
}else
cout<<"la fecha es: "<<dd<<" / "<<mm<<" / "<<aa<<endl;
cout<<"la fecha del dia siguiente es: "<<dd+1<<" / "<<mm<<" / "<<aa<<endl;
    system("pause");
    getch();
    return 0;

} 