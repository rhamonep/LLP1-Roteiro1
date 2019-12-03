#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado{

private:

  std::string nome;
  std::string sobrenome;
  float salario;

public:

  Empregado();
  Empregado(std::string nome, std::string sobrenome, double salario);

  void setNome(std::string nome);
  void setSobrenome(std::string sobrenome);
  void setSalario(double salario);

  std::string getNome();
  std::string getSobrenome();
  double getSalario();
  double getSalarioAnual();

  void IncrementarSalarioPorcento(int porcentagem);
  void exibir();
};

#endif
