#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(){
    dia = 0;
    mes = 0;
    ano = 0;
}

Data::Data(int dia, int mes, int ano){
  setData(dia, mes, ano);
}

int Data::getDia(){
  return dia;
}
int Data::getMes(){
  return mes;
}
int Data::getAno(){
  return ano;
}

void Data::setData(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    if(!verificaData()){
      this->dia = 0;
      this->mes = 0;
      this->ano = 0;
      std::cout << "Data Inválida!" << std::endl; 
    }
}

bool Data::verificaDia(){
  if(dia >= 1 && dia <= 31)
    return true;
  return false;
}

bool Data::verificaMes(){
  if(mes >= 1 && mes <= 12)
    return true;
  return false;
}

bool Data::verificaData(){
  if(verificaDia() && verificaMes())
    return true;
  return false;
}

void Data::avancaDia(){

  int ultimoDia;

  dia += 1;

  switch(mes){
    case 2:
      ultimoDia = 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      ultimoDia = 30;
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      ultimoDia = 31;
      break;
  }
  if(dia > ultimoDia){
    dia -= ultimoDia;
    mes += 1;
  }
  if(mes > 12){
    mes -= 12;
    ano += 1;
  }
}

void Data::exibir(){
  cout << dia << '/' << mes << '/' << ano << endl;
}