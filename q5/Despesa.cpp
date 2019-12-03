#include "Despesa.h"
#include <iostream>

using namespace std;

Despesa::Despesa(){
  valor = 0;
  tipo = "";
}

Despesa::Despesa(std::string tipo, double valor){
  setTipo(tipo);
  setValor(valor);
}

void Despesa::setValor(double valor){
  this->valor = valor;
}

void Despesa::setTipo(std::string tipo){
  this->tipo = tipo;
}

double Despesa::getValor(){
  return valor;
}

std::string Despesa::getTipo(){
  return tipo;
}

void Despesa::exibir(){
  cout << "Tipo de despesa: " << tipo << endl;
  cout << "Valor: R$" << valor << "\n" << endl;
}