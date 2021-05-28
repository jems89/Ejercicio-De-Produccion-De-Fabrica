#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
#include "funciones.h"
#include "Produccion.h"

/*1) Por cada máquina, la temperatura promedio en relación a la cantidad de días que
trabajó la máquina.*/

void TemperaturaPromedio(){

    system("cls");
    float AcumularTemperaturas=0;
    int contardias=0,aux;
    int pos=0;
    float promedio;
    Produccion Maquinas;
    Fecha f;
    while(Maquinas.leerDeDisco(pos)){
    AcumularTemperaturas+=Maquinas.getTemperatura();
    if(f.getDia()!=0){ contardias++;}
    promedio=AcumularTemperaturas/contardias;
    cout<<"La Temperatura promedio es "<< promedio<<endl;

    }




}


/*2) Por cada mes del año 2020, los tipos de combustible que no produjeron piezas
defectuosas.
*/

void TiposDeCombustible(){

    system("cls");
    int pos=0;
    int tipo;
    Produccion maquinas;
    Fecha f;
    if(f.getAnio()==2020){

        while(maquinas.leerDeDisco(pos)){
                if(maquinas.getPiezasDefectuosas()== 0){tipo=maquinas.getTipo();}

                cout<<"Tipos de Combustible que no produce piezas Desfectuosa "<<tipo<<endl;

                pos++;}

    }
}

/*Hacer un archivo llamado temperaturas.dat , que registre el número de máquina,
y la mayor temperatura registrada por dicha máquina. Listar el archivo*/

