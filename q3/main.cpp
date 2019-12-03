#include <iostream>
#include "Empregado.h"

using namespace std;

int main(){
  Empregado empregado1 = Empregado("Rômulo", "Rodrigues", 2000);
  Empregado empregado2 = Empregado("Jorge", "Aragão", 2500);

  empregado1.exibir();
  empregado2.exibir();

  empregado1.IncrementarSalarioPorcento(10);
  empregado2.IncrementarSalarioPorcento(10);

  empregado1.exibir();
  empregado2.exibir();

  return 0;
}
