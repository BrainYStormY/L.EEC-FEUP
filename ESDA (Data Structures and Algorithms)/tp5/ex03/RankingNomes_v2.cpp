#include <iostream>
#include <fstream>
#include <algorithm>
#include "RankingNomes.h"
using namespace std;

RankingNomes::RankingNomes(string ficheiro, int num_pos)
{
  ifstream fin(ficheiro);
  string nome;
  int count = 0;
  
  while(getline(fin, nome) && count < num_pos)
  {
    nomes.push_back(nome);
    count++;
  }
  max_pos = num_pos;
}

void RankingNomes::Imprime() const
{
  cout << "\nRanking de máximo " << max_pos << " posições:\n";

  list<string>::const_iterator it = nomes.begin();

  for(size_t i = 0; i < nomes.size(); i++)
  {
    cout << "Pos " << i+1 << " -> " << *it << endl;
    it++;
  }
};

int RankingNomes::Insere(string nome, int posicao)
{
  if(nome == "" || posicao <= 0 || posicao > max_pos) return -1;

  list<string>::const_iterator it = nomes.begin();

  for(int i = 1; posicao - i; i++)
  {
    it++;
  }

  nomes.insert(it, nome);
  
  if(max_pos < (int)nomes.size()) nomes.resize(max_pos);

  return 0;
};

int RankingNomes::Remove(int posicao)
{
  if(posicao <= 0 || posicao > (int)nomes.size()) return -1;

  list<string>::const_iterator it = nomes.begin();

  for(int i = 1; posicao - i; i++)
  {
    it++;
  }

  nomes.erase(it);

  return 0;
};

int RankingNomes::Promove(int pos, int numero_pos)
{
  if(pos <= 0 || pos > (int)nomes.size()) return -1;

  list<string>::const_iterator it = nomes.begin();

  for(int i = 1; pos - i; i++)
  {
    it++;
  }

  if(Remove(pos) == -1) return -1;
  if(Insere(*it, max(pos - numero_pos, 1)) == -1) return -1;
  
  return 0;
};

int RankingNomes::Despromove(int pos, int numero_pos)
{
  if(pos <= 0 || pos > (int)nomes.size()) return -1;
  
  list<string>::const_iterator it = nomes.begin();
  for(int i = 1; pos - i; i++)
  {
    it++;
  }

//Este método produz os resultados que me parecem corretos, apesar de serem diferentes dos desejados segundo o trabalho.
//Mudanças nas linhas: 36, 97 e 98.
  if(Remove(pos) == -1) return -1;
  if(Insere(*it, min(pos + numero_pos, (int)nomes.size() + 1)) == -1) return -1;
  
  return 0;
};