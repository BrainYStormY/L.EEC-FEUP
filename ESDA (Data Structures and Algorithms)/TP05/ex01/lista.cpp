#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void imprime_lista(list<string> lst)
{
  list<string>::iterator it;

  for(it = lst.begin(); it != lst.end(); it++)
  {
    cout << *it << endl;
  }
}

int main()
{
//a
  list<string> lst_jogos;

//b
  ifstream fin("arquivo.txt");
  string line;
  while(getline(fin, line))
  {
    lst_jogos.push_back(line);
  }

//c
  cout << "Foram carregados " << lst_jogos.size() << " jogos.\n";
  
//d
  for(auto it = lst_jogos.begin(); it != lst_jogos.end(); it++)
  {
    cout << "Pos " << distance(lst_jogos.begin(), it) << " -> " << *it << endl;
  }

//e
  string a;
  for(auto it = lst_jogos.begin(); it != lst_jogos.end(); it++)
  {
    for(auto i = lst_jogos.begin(); i != lst_jogos.end(); i++)
    {
      if(*i > *it)
      {
        a = *i;
        *i = *it;
        *it = a;
      }
    }
  }
  cout << "Lista Ordenada:\n";
  for(auto it = lst_jogos.begin(); it != lst_jogos.end(); it++)
  {
    cout << "Pos " << distance(lst_jogos.begin(), it) << " -> " << *it << endl;
  }

//f
  auto rmit = find(lst_jogos.begin(), lst_jogos.end(), "Mario Kart (Wii)");
  lst_jogos.erase(rmit);
  cout << "Lista sem o jogo Mario Kart (Wii):\n";
  for(auto it = lst_jogos.begin(); it != lst_jogos.end(); it++)
  {
    cout << "Pos " << distance(lst_jogos.begin(), it) << " -> " << *it << endl;
  }  

//g
  for(auto jogo = lst_jogos.begin(); jogo != lst_jogos.end(); jogo++)
  {
    string ps2 = "(PS2)";
    if(jogo->find(ps2) != string::npos) lst_jogos.erase(jogo--);
  }
  cout << "Lista sem jogos da PS2:\n";
  for(auto it = lst_jogos.begin(); it != lst_jogos.end(); it++)
  {
    cout << "Pos " << distance(lst_jogos.begin(), it) << " -> " << *it << endl;
  }

  return 0;
}