#ifndef DATA_H
#define DATA_H

class Data{
  
  private:

    int dia; 
    int mes;
    int ano;

    bool verificaDia();
    bool verificaMes();

  public:
  
    Data();
    Data(int dia, int mes, int ano);

    int getDia();
    int getMes();
    int getAno();

    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    void setData(int dia, int mes, int ano);

    bool verificaData();
    void avancaDia();
    void exibir();
};


#endif
