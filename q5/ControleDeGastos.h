#ifndef CONTROLE_DE_GASTOS_H
#define CONTROLE_DE_GASTOS_H

#include "Despesa.h"
#include <vector>
#include <string>

#define TAMANHO 20

class ControleDeGastos{

private:

  Despesa despesas[TAMANHO];

public:

  void setDespesa(Despesa despesa, int pos);
  
  Despesa getDespesa(int pos);

  double calculaTotalDeDespesas();
  bool existeDespesaDoTipo(std::string tipo);
  void exibeExisteDespesaDoTipo(std::string tipo);
};

#endif
