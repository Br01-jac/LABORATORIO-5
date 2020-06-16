#include "iostream"
#include "conio.h"

using namespace std;

int maximo()
{
    int menor, mayor,  residuo;
    cout<<"digite numero mayor: ";
    cin>>mayor;
    cout<<"digite numero menor: ";
    cin>>menor;

        do
{
residuo = mayor % menor;
if(residuo != 0){
mayor = menor;
menor = residuo;
}
}
while(residuo != 0);

return menor;



}
int main(void)
{
cout<<"el MCD es: "<<maximo()<<endl;


getch();
    return 0;
}