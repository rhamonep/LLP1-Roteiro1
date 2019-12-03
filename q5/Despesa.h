#ifndef DESPESA_H
#define DESPESA_H

#include <string>

class Despesa{
private:
  double valor;
  std::string tipo;

public:
  Despesa();
  Despesa(std::string tipo, double valor);

  double getValor();
  std::string getTipo();

  void setValor(double valor);
  void setTipo(std::string tipo);
  void exibir();
};

#endif
