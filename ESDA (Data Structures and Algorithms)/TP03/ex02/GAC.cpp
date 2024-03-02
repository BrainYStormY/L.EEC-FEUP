#include <iostream>

using namespace std;

class Aluno
{
public: // Porque e', para ja', importante? Experimente comentar a linha...
  string nome;
  string curso;
  int numero;
  float media;
  
  Aluno(string nom)
  {
    nome = nom;
    curso = "";
    numero = 0;
    media = 0;
  }
  
  Aluno(string nom, string cur, int num)
  {
    nome = nom;
    curso = cur;
    numero = num;
    media = 0;
  }

  void setNome(string nom)
  {
    nome = nom;
  }

  void setCurso(string cur)
  {
    curso = cur;
  }

  void setNumero(int num)
  {
    numero = num;
  }

  void setMedia(float med)
  {
    media = med;
  }

  string getNome() const
  {
    return nome;
  }
  
  string getCurso() const
  {
    return curso;
  }

  int getNumero() const
  {
    return numero;
  }
  
  float getMedia() const
  {
    return media;
  }

  void imprimir (ostream & os) const
  {
    cout << "\t" << nome << "\t| " << curso << "\t| " << numero << "\t| " << media << endl;
  }
 
  string sigla() const
  {
    string sigla;
    sigla += nome[0];
    int length = nome.length();
    for(int i = 1; i < length; i++)
    {
      if(nome[i] == ' ')
      {
        sigla += nome[i+1];
      }
    }
    return sigla;
  }

};

int main()
{

  Aluno a1("Pedro Ferreira");
  Aluno a2("Ana Martins", "Direito", 2022045);
  Aluno a3("Manuel Silva", "Arquitetura", 2021033);

  a1.setCurso("Medicina");
  a1.setNumero(2020123);

  a1.setMedia(10.3);
  a2.setMedia(18.2);
  a3.setMedia(16.0);

  cout << "Lista de alunos: (nome | curso | numero | media)" << endl;
  cout << "\t" << a1.nome << "\t| " << a1.curso << "\t| " << a1.numero << "\t| " << a1.media << endl;
  cout << "\t" << a2.nome << "\t| " << a2.curso << "\t| " << a2.numero << "\t| " << a2.media << endl;
  cout << "\t" << a3.nome << "\t| " << a3.curso << "\t| " << a3.numero << "\t| " << a3.media << endl;

  Aluno al("Alberto Mateus", "Engenharia", 2019197);
  al.imprimir(cout);

  cout << a1.sigla() << endl;
  cout << a2.sigla() << endl;
  cout << a3.sigla() << endl;
  cout << al.sigla() << endl;
  return 0;
}
