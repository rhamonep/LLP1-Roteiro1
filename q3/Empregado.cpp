#include "Empregado.h"
#include <iostream>

using namespace std;

Empregado::Empregado(){
  nome = "";
  sobrenome = "";
  salario = 0;
}

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
  setNome(nome);
  setSobrenome(sobrenome);
  setSalario(salario);
}

void Empregado::setNome(std::string nome){
  this->nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){
  this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){
  this->salario = salario;
}

std::string Empregado::getNome(){
  return nome;
}

std::string Empregado::getSobrenome(){
  return sobrenome;
}

double Empregado::getSalario(){
  return salario;
}

void Empregado::IncrementarSalarioPorcento(int porcentagem){
  salario += (salario * porcentagem)/100.0;
}

double Empregado::getSalarioAnual(){
  return salario * 12;
}

void Empregado::exibir(){
  cout << "Nome: " << nome << endl;
  cout << "Sobrenome: " << sobrenome << endl;
  cout << "Salario Mensal: R$" << salario << endl ;
  cout << "Salario Anual: R$" << getSalarioAnual() << "\n" << endl;
}


