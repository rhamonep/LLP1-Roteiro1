#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){
  ControleDeGastos gastos;
  Despesa despesa1 = Despesa("Xerox", 10);
  Despesa despesa2 = Despesa("Cinema", 35);
  Despesa despesa3;

  gastos.setDespesa(despesa1, 0);
  gastos.setDespesa(despesa2, 1);
  gastos.setDespesa(despesa3, 2);

  despesa3.setTipo("Outros");
  despesa3.setValor(100);

  gastos.setDespesa(despesa3, 3);

  gastos.getDespesa(0).exibir();
  gastos.getDespesa(1).exibir();
  gastos.getDespesa(3).exibir();

  cout << "Total de despesas: " << gastos.calculaTotalDeDespesas() << "\n" << endl;

  gastos.exibeExisteDespesaDoTipo("Cinema");
  gastos.exibeExisteDespesaDoTipo("Lazer");

  return 0;
}
