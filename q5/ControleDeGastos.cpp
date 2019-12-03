#include "ControleDeGastos.h"
#include <iostream>

using namespace std;

void ControleDeGastos::setDespesa(Despesa despesa, int pos){
  despesas[pos] = despesa;
}

Despesa ControleDeGastos::getDespesa(int pos){
  return despesas[pos];
}

double ControleDeGastos::calculaTotalDeDespesas(){
  double total = 0;

  for(Despesa atual : despesas){
    total += atual.getValor();
  }

  return total;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipo){
  for(Despesa atual : despesas)
    if(atual.getTipo() == tipo)
      return true;
  
  return false;
}

void ControleDeGastos::exibeExisteDespesaDoTipo(std::string tipo){
  if(existeDespesaDoTipo(tipo)){
    cout << "Despesa Existente!" << "\n" << endl;
  }else{
    cout << "Despesa NÃO existente!" << "\n" << endl;
  }
}
