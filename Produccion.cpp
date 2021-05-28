#include <iostream>
using namespace std;
#include "Produccion.h"

Produccion::Produccion()
{
    //ctor
}

int Produccion::getNumeroMaquina()
{
    return _numeroMaquina;
}

void Produccion::setNumeroMaquina(int numeroMaquina)
{
    _numeroMaquina = numeroMaquina;
}

int Produccion::getTipo()
{
    return _tipo;
}

void Produccion::setTipo(int tipo)
{
    _tipo = tipo;
}

Fecha Produccion::getFecha()
{
    return _fecha;
}

void Produccion::setFecha(Fecha fecha)
{
    _fecha = fecha;
}

int Produccion::getPiezasTotales()
{
    return _piezasTotales;
}

void Produccion::setPiezasTotales(int piezasTotales)
{
    _piezasTotales = piezasTotales;
}

int Produccion::getPiezasDefectuosas()
{
    return _piezasDefectuosas;
}

void Produccion::setPiezasDefectuosas(int piezasDefectuosas)
{
    _piezasDefectuosas = piezasDefectuosas;
}

float Produccion::getTemperatura()
{
    return _temperatura;
}

void Produccion::setTemperatura(float temperatura)
{
    _temperatura = temperatura;
}

void Produccion::mostrar()
{
    cout << _numeroMaquina << ",";
    cout << _tipo << ",";
    cout << _fecha.getDia() << ",";
    cout << _fecha.getMes() << ",";
    cout << _fecha.getAnio() << ",";
    cout << _piezasTotales << ",";
    cout << _piezasDefectuosas << ",";
    cout << _temperatura << endl;
}
bool Produccion::leerDeDisco(int pos){
    const char *archivo = "produccion.dat";


}
bool Produccion::grabarEnDisco(){
    const char *archivo = "produccion.dat";


}




