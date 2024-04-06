#include "RankingNomes.h"
#include <iostream>
using namespace std;

// Não modificar!
int main()
{
    RankingNomes ranking1("nomes.txt", 10);

    ranking1.Insere("Zeferino Duarte", 9);
    ranking1.Insere("Adélia Martins", 11);

    ranking1.Remove(32);
    ranking1.Remove(1);

    ranking1.Promove(10, 2);
    ranking1.Promove(9, 2);
    ranking1.Promove(5, 6);
    
    ranking1.Imprime();

// -------------- Teste Despromove -----------//
  
   cout << endl << " -- Teste Despromove -- " << endl;

  if (ranking1.Despromove(10, 2) == -1)
  {
    cout << endl << " -- Posição inválida --" << endl;
  }
  
  ranking1.Imprime();

  if (ranking1.Despromove(9, 2) == -1)
  {
    cout << endl << " -- Posição inválida --" << endl;
  }
  
  ranking1.Imprime();
  
  if (ranking1.Despromove(5, 4) == -1)
  {
    cout << endl <<" -- Posição inválida --" << endl;
  }
  
  ranking1.Imprime();

  return 0;
}